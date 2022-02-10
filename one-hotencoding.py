## Prototype for only gender attribute  - testing
# User defined One Hot Encoding function
def convert_to_binary(df,column_to_convert):
    categories = list(df[column_to_convert].drop_duplicates())
    print (categories)
    for category in categories:
        cat_name = str(category).replace(" ", "_").replace("(", "").replace(")", "").replace("/", "_").replace("-", "").lower()
        col_name = column_to_convert[:5] + '_' + cat_name[:10]
        print (col_name)
        df[col_name] = 0
        df.loc[(df[column_to_convert] == category), col_name] = 1

    return df

# One Hot Encoding
print("One Hot Encoding categorical data...")
#columns_to_convert = ['gender', 'signup_method', 'signup_flow', 'language', 'affiliate_channel', 'affiliate_provider', 'first_affiliate_tracked', 'signup_app', 'first_device_type', 'first_browser']
columns_to_convert = ['gender']
for column in columns_to_convert:
    df_all = convert_to_binary(df=df_all, column_to_convert=column)
    #df_all.drop(column, axis=1, inplace=True)
print("One Hot Encoding categorical data...completed")
df_all.head()
