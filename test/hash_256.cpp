#if defined(__SSE4_2__) && !defined(__wasm_simd128__)

constexpr uint64 CITY_HASH_CRC_128_RESULTS[256][4] = {
    {
     0x95162F24E6A5F930, 0x6808BDF4F1EB06E0,
     0xB3B1F3A67B624D82, 0xC9A62F12BD4CD80B,
     },
    {
     0x0FBBE375DFCC2C88, 0xB4E3FBE792A75146,
     0xFCC2F708DD5A12AD, 0x6673A87EED15D78B,
     },
    {
     0x0ED7B9E44D8E37B4, 0xE23B3E279858C3A3,
     0x5D047AB64997BBBF, 0x4538E41EF442AC88,
     },
    {
     0xFB776C61D561F861, 0x4779E60386AF963B,
     0x57D5D7B80F9C8845, 0x749E9E56D7E84760,
     },
    {
     0x3CE16F55A9F22018, 0xC86B6C9EC2A5A3AF,
     0x87D14FBE5797AD09, 0x4AD4A7B15A84388E,
     },
    {
     0xA7FAC4B64C35C8B4, 0xDD83C2CDF35398F6,
     0xEAF64F6BA6A2C9E8, 0x4E72CE1685CE9077,
     },
    {
     0x3C72D7DB3976DB18, 0x6EA9C96DF5080587,
     0xADAF1AF2E2713300, 0x6E1273D1DE76C915,
     },
    {
     0xFF5A4D4F5E7EC563, 0x50C2A30899C358F6,
     0x843F1FF38364F643, 0xE7D547205563ADC0,
     },
    {
     0x7AB441ECAB1C4F5E, 0x8DC6C565320BD9F6,
     0x1C8AAED81F6C95F8, 0x33430BD0EC6F0E07,
     },
    {
     0xDB8DBD5BEDCA9960, 0x8E4F5E7499F87B31,
     0x8BBF4350ED88BA28, 0x22DB1907B60CA9D7,
     },
    {
     0xD2C67D0239221997, 0xE9E831F973145DBC,
     0x9BFCDD757DDBE712, 0xCF96745E76B564B2,
     },
    {
     0x712BC8C99B946F1B, 0x8116AC9EFCBA72C7,
     0x6A91C167C4AB7EBF, 0xD831126843831820,
     },
    {
     0xB9F5AAD581ADC8CF, 0x1E2A461B98E835CC,
     0x0DE30CC56F6F14D1, 0x964379D796EB2C58,
     },
    {
     0xA7157B0B15961A9C, 0x2BEFC8504F9631F2,
     0xE90AE8C20A447FCF, 0x653F04F925C41127,
     },
    {
     0x1D3F6157884FA4AA, 0x102FDC39A5862640,
     0x1B0987BDAD79001A, 0x8E1D2B65D0340BE0,
     },
    {
     0xFCA199ED6690BF6C, 0x30D8C4230147BCEC,
     0x4983BB1776085693, 0x72202F6D8DD4B0DC,
     },
    {
     0x862F3550800C6765, 0x98C42937D2545007,
     0x66F2046AB685863E, 0x4C1F9B237D2DE428,
     },
    {
     0x12956552A85FC523, 0x0FF4EC3E4AB3FD4F,
     0x50E1449D4B43C86B, 0xC5FFB061A3CA03BD,
     },
    {
     0x4FC7E75A64FCDA8F, 0x8F0672E97CB2A868,
     0xB29122A3997BEE88, 0xE745EB349B870AE2,
     },
    {
     0x9DAF0FCAC1832BEF, 0x35722041B5160761,
     0x543295671EF08C22, 0x60FC976B141720DC,
     },
    {
     0xF7392E7B687EB5AC, 0xCEEA3A16534C7EAA,
     0x415CD5DA20D32B7A, 0x26F052B6EEAAEEA3,
     },
    {
     0x513F58F5AFBFCE71, 0x60352473BF6EACCC,
     0x7ADA98560B584F04, 0x5EF7E0BF7D3F66A6,
     },
    {
     0xD3AF9628730672DF, 0x3EBF9BF42731987C,
     0x58AEB12E8A62A997, 0xF59D60DD5719638F,
     },
    {
     0xC36B01CEAA6C8A0D, 0x0E6A7E8E9C8E10B0,
     0x7DCD2B2DD1173B5B, 0xE70AF033BAE1C87F,
     },
    {
     0xA3D67ECF2088D756, 0x5281FFDBA111FEF8,
     0xFEA508C4C785C164, 0x9279E37A7C96A0CA,
     },
    {
     0x890E3E66B913BD59, 0x4E31870018059E9D,
     0x88E9F5C7663633DB, 0xB8A6CFC1BAB26A66,
     },
    {
     0xE9D6107946A04CA4, 0xFC16F40C2F407417,
     0x9DD7B5F3220BE9A3, 0x44B0099E0BFDBE83,
     },
    {
     0xFBE617DE4A9B15B9, 0xD86FC9C3E8914784,
     0xA46749EB9D84EAE7, 0x146CABE5A695876D,
     },
    {
     0x38D0BB4F791733E0, 0x9E143C41098707D6,
     0xE7077F00B93D9D99, 0xC24665A15E646C88,
     },
    {
     0x5688DE45BBE0E66F, 0x0A143B850A3312B0,
     0x763FD41A3752766B, 0x8CA2628C72133236,
     },
    {
     0x167A29C631AEF172, 0x5EFB63DF1BC9D21E,
     0x944626AABD6BAAFA, 0x503BF1610C425E36,
     },
    {
     0xD75815362DBA0F71, 0x0347C4B2823861DD,
     0xBEB729630D2C918E, 0x349CB4B5ED9DEC2F,
     },
    {
     0x731C8C1EF5CE076F, 0x2E79265D0C580965,
     0x6AAE0F9E2E51B989, 0xCDE63FEB6D84E93B,
     },
    {
     0x1E1596C6A3F2FBDC, 0xC5E54B003D7125FD,
     0xF6509657A222250E, 0x3739D1D78E2EBF73,
     },
    {
     0x5141658FFD628A90, 0xF62BEE48757AE2A1,
     0xE67435A22FF489BB, 0x21B840DAA5C53A0A,
     },
    {
     0x5644AE1A8DAB3FCB, 0x0CFCE0588BE1D73D,
     0x722D26D0C7A1991B, 0x0BA2AF380193B554,
     },
    {
     0x6333097DCD7C5B57, 0xE23F76150866BB2B,
     0x215DE84FB117255F, 0xF7F58A8FA9BFB464,
     },
    {
     0x3A10C79A617FCC00, 0xDF25B7FF8C34DC32,
     0x64C6AFF6D2FD0C6E, 0x556F7F19A6A5BC61,
     },
    {
     0x466BD13934F1D548, 0x6DDA392A99F27758,
     0x8D63FBB0668FD811, 0x0A86091A10441CC9,
     },
    {
     0x4E0B75B97AEE506D, 0xD36E8C7BB0B3380F,
     0x0E23A66CBADFC99C, 0x563F01E82F7011CF,
     },
    {
     0xB47818834799DAB1, 0x1C7319D8696F3CF6,
     0xB695D2D46A6B7BC3, 0xA40B634ED6E40746,
     },
    {
     0x7EEC9BAC9D77FF9E, 0x3CB224A64EB538F2,
     0xF38DD60F723AD661, 0x30B5D29CBC6A84CA,
     },
    {
     0xDFCFECEA93BC1A7C, 0x9A3B8A8BCA9B9E80,
     0xC06B75D8B9F27A79, 0xEB7C12609258C5A5,
     },
    {
     0x359348B33F91980D, 0xDFC1E08C0D073FA4,
     0x5CC2DF4AB963F173, 0x4FA8AEE0C510A2D5,
     },
    {
     0x506CFC6F03D5A6B1, 0x360B108C86EE53A2,
     0xA825890CC42B7C6F, 0xF049CA3A8063BAFF,
     },
    {
     0x517730E0ADBD09FD, 0xBF8EC0D71D24C5FE,
     0xD14848768AD3446A, 0x1C24BE1BA97AD1AF,
     },
    {
     0x0541C189CEFC1FFB, 0x5C43A265C96F1B3C,
     0x4EB8BE2846BC0ABA, 0x46D629CB19C23BB0,
     },
    {
     0x08B343B9F647A77D, 0xF2DB7F3B2EE37564,
     0x2AA215A1F153EF57, 0xC4B00EEBB48DAEEA,
     },
    {
     0x2381E77E5FEBEBFC, 0x3E33943D5C199FF9,
     0xBAA89E9CD8D28EED, 0xEA45B63C51357713,
     },
    {
     0xCC18D88ED6D3268B, 0xBC81FC36D086FBCA,
     0x6A3E801B820DE3AF, 0xA991C63DA589E0FE,
     },
    {
     0x55A8AE39019BB557, 0x00D24074F323D6D4,
     0xC7CB7C030B4F03B5, 0x09562D609A5A909B,
     },
    {
     0x32A0C3A81B451009, 0x3803AEAD14FDA37B,
     0xB7F9AEA1916DF030, 0x58B689DB44485B75,
     },
    {
     0xB48B0366EF432004, 0x23FF8444391EBAC0,
     0xE61FCAB4165698EB, 0x4496342D26FBACDF,
     },
    {
     0x4F090502628408C2, 0x0ACB5F20962D83D8,
     0xE373B49C0900FEF2, 0xAD30101712E4D046,
     },
    {
     0x829E8234CB748D6D, 0x02F55DBF16489BF3,
     0x92A64E0B080F8D30, 0x7BB7B09AD11E5B6F,
     },
    {
     0x512B70BBAE0C71FA, 0x365485B53A6D7481,
     0xB6136A510396ACF7, 0x8A5CDAFE67C09DAA,
     },
    {
     0xF09196CE8AC7AFD7, 0xEF1BFD3DD151CD6F,
     0x4B4E512B9DA2428D, 0x2C71C1C28F44FAF8,
     },
    {
     0x2D58AAEFFCA5F649, 0x7299F0458570DE3A,
     0x2EFAE54566B55F83, 0xCDE6CCE4C1A22DDF,
     },
    {
     0x47997FE7C52F2F3E, 0x3A06A8D4914FC99E,
     0xE2D8F511DB24C54E, 0xEF16681B5992976F,
     },
    {
     0xAF9C6D72B3B4258B, 0x0A13F6DB0A71B5A9,
     0x99D61F7537991DAB, 0x43B0DF4DF8BDECF7,
     },
    {
     0xF90FDC97D6A3CE53, 0x79306C83FBDBE752,
     0xF61AD20B9E6F12AB, 0xDB45B1D41DC1F06C,
     },
    {
     0xDAB33D8B7B6B7C24, 0x23EE3027376F2996,
     0x23C8B32D58C5620B, 0x257225265A7B1EB6,
     },
    {
     0x7963F5E28CDF9430, 0xDB0936C393F7645C,
     0x71804EE546233275, 0xEA1690A69DE06637,
     },
    {
     0x842EBBBC674E2B08, 0x2CAE5997034D1A83,
     0x8CDBDC3F4E253468, 0x7DDBD94AF47A8652,
     },
    {
     0xAE76613CE9DC5FC3, 0x78A16E3E47D53E0E,
     0x4425ADA4172F7070, 0x8F6003E5084E62AF,
     },
    {
     0x8655E436ED943A36, 0xD8AF7DC7C189434D,
     0x368CF9D762CE520F, 0x30A9537EA015CFBD,
     },
    {
     0x139C81A4B6F12321, 0xB1549FD5EC2EB3C6,
     0x85726803B354B35A, 0x7BAF9E17F38DDCB3,
     },
    {
     0x13CBA078DAEA0ABD, 0x73603B87C99B0945,
     0xD929A3307F0F074C, 0x0E8C23FA33D8F43E,
     },
    {
     0x9C0E0D1B9E0A6215, 0xA7B2E38C5972F23F,
     0x64076731C473C654, 0xE311114D60013B3A,
     },
    {
     0xCE1947C3A9984457, 0x5C69C664194C5BFF,
     0x2E61ED0FF53890BB, 0x2F9B824268BD05F1,
     },
    {
     0x3AAA40079EDCF883, 0x63752A5A8EB1B4D5,
     0x255241AA90966989, 0x3D73154CCA69E517,
     },
    {
     0xB2DB6FF293CB29E2, 0x00B48005D2C91E46,
     0xB413896CF4DA9171, 0xABC2E0DFB0388E6D,
     },
    {
     0xD9E3FB318B6E0355, 0xE3F33633B5398DFA,
     0x013C46F807B2A203, 0xDE8454D0A90B3E59,
     },
    {
     0x70E37EAB7B6DB5D9, 0xAE11B0FD747D399B,
     0xBEE4336D247167E6, 0xB3E68F5F00467997,
     },
    {
     0xA2D68B0FE445F4F9, 0x0EA5175CDCD82064,
     0xC9B0AEEB448C3C77, 0x6952B2574A8175E1,
     },
    {
     0x226DA70A5B314709, 0x18A662A7770B5AD3,
     0xF9E0CB805BA75DCA, 0x94CE111B027194E4,
     },
    {
     0x76304E8A2B75190F, 0xFEF54EDE78045007,
     0xDEC586E845F4AD22, 0x479C1911F98E49B7,
     },
    {
     0x2D2F1DD1696ADCCA, 0xB903BAAE03242941,
     0xCC3CBDAB20B19992, 0x026E6D1BD239C4E8,
     },
    {
     0xF42612CFA359AD2F, 0x3AE228AC18C337DF,
     0x0A35AA1E8B879B0A, 0xB51BCDE5C9BEAFF7,
     },
    {
     0x36CE5F76CA73EA51, 0x9A92FCFF8020609A,
     0xA58EDC2B66646FCE, 0x80304E4F73E2DFCF,
     },
    {
     0x40F7738A6C72EADB, 0x028E867D010A9296,
     0x2BABF729A68D5D5C, 0x7A1947749226CE46,
     },
    {
     0xBF444E6A1BDCF4EF, 0x55710276EAE78E34,
     0xCDBC22AA9978BB12, 0x05EA06B906D0E912,
     },
    {
     0x9812617D90A56648, 0x9F89561E05F5371F,
     0xAD38B4D482BCF305, 0xDFBCD70A7381D494,
     },
    {
     0x0D7E5AB59FB14877, 0x360731C07EB9E5AE,
     0xE5C440CBCD524E8E, 0x3A1C35A4D5DB55E0,
     },
    {
     0x097C62C259B8BFA2, 0x1B6A837C2809DAF4,
     0x1A7AADA1FD0050F5, 0x6EB27E27DB67B3CA,
     },
    {
     0x3F9316C1AFAE974C, 0x2796218C0182C974,
     0x033CE5C73A425449, 0xB66C20E99BC13B41,
     },
    {
     0x6E5168DB87539A8B, 0x9226BAACF8C882FB,
     0xEC15A42D03FE0FA8, 0x630CE1CF30BC4774,
     },
    {
     0xD0D7FCA1067E7E28, 0x26CD3360BA2C2963,
     0xBB3B10AC8E548CBD, 0x8DFDC860AD0AF123,
     },
    {
     0x6BFFFF48367B6182, 0xA55DA11F09AEF72A,
     0x496954FBD428E1E1, 0x19D5AA3D4DF025F8,
     },
    {
     0xEF38DB094E95F1ED, 0x06582922B597E3AE,
     0xA719FD0E337C6B7B, 0xDE3823BB8EFFD28D,
     },
    {
     0xFC4A88F7A50FE030, 0x3C24C4800BA7D443,
     0xC2F27B64DEE8CD9B, 0x42E03204472C4911,
     },
    {
     0xC1829AC1EFB9791A, 0xC9B78217C379D8E3,
     0x433D6BDF7BA5DD43, 0xFB4F6CA55AB47732,
     },
    {
     0x24BCC3B7E2BDE948, 0xCE4BCE8294C64F71,
     0x658817FEBE59E2F1, 0xBB87B4422562A689,
     },
    {
     0xA88844384B43EEAA, 0x351A703BDB8676EC,
     0xD7BCE83BD64EAA12, 0x5BAAD55EE89C542F,
     },
    {
     0xD5C244138DDE38D2, 0xD96E98858BE45D78,
     0x606D4849FE5882D5, 0x23AC293BD7371D65,
     },
    {
     0x724FF0E9F442494D, 0xF13F758EFE75020B,
     0x39BECC7B9B174E38, 0x8EBCBCAAE0EE323C,
     },
    {
     0x6ACECC8A42508C12, 0xB7951549DADB376C,
     0x328B8B77E523CE00, 0xA52AA01619B35178,
     },
    {
     0x1CFA4D813B96EE79, 0x65003AEDA8E1966B,
     0x7B3D76BA03B4359C, 0x2645419DF9E0A779,
     },
    {
     0x7C3DFB8B25985B3E, 0x6E85489171662BB2,
     0x50723C3883726E91, 0x1456E2631199C271,
     },
    {
     0xA892307B1E60AD61, 0x7C61368EDD7D6E74,
     0x529DBE6FDF2B7D04, 0x88D50A41FD034187,
     },
    {
     0x3255EB8E118685A1, 0x1DB3244D931ACE17,
     0xE759C8AB7984AE1E, 0x2AAC7CCB0C2BDF71,
     },
    {
     0x6C372507ED26B38B, 0x6A6BB5FFE02B74AA,
     0x047265951A917919, 0x9D93C31C1979DAED,
     },
    {
     0xA31F73376B6B383B, 0x0DEAA576D6A6C617,
     0x9ED665C5DF3DA421, 0xC1073B1F6B67250D,
     },
    {
     0xF9AC2C96C8FEE16B, 0xEF403C7E65321391,
     0x0D973BC49A6AEF6E, 0x3584C7EC88FB02C0,
     },
    {
     0x94EB65410D7E424F, 0x8D12BEC2F5428BF0,
     0xB138C52F31D04AA0, 0x3AB2EAD8A303550A,
     },
    {
     0xE127D174827ABF53, 0x791D6C70A895912D,
     0x72BCFCDCC36AC0AE, 0x659DA3DBFD3CF9B3,
     },
    {
     0x452D3DC39FE8F7D0, 0x50CF15735618A4B7,
     0x4FB60C6CDF005788, 0x08AB8BF6F44BEBB3,
     },
    {
     0x6417C5182DDDC73C, 0xB0D4AE34DAEE1BC9,
     0x6DFF45BC8CF4CABA, 0x4A55902F9443755F,
     },
    {
     0xDAABD81FF62E0921, 0x211F177105E32602,
     0x9146C0C3B20084DA, 0x9FA00A13603F8D0A,
     },
    {
     0x8927076055201AA9, 0x4909E5780D28AB00,
     0xF490C358C68DF70B, 0xAE8B84B703D6E46C,
     },
    {
     0x99C8DA4B63CFC583, 0x792ABF2633A747CA,
     0x2FA8E1F5778DCA6D, 0x1E7D31F105261803,
     },
    {
     0xA49E2AB004E9E871, 0x52F8C4A9A4E9A653,
     0x4A7BFF059B065AD0, 0xD816BF894F96B8F2,
     },
    {
     0x2EA72FB0DBEB1FE2, 0xCBC8C288000935FD,
     0x92DD35BEE6DDD67B, 0xB22930C9CF765C55,
     },
    {
     0xEB5F3D644E495654, 0xA15D7623821D5CBF,
     0xD73F3B7265A42C26, 0x0C924A25A04AF9D5,
     },
    {
     0x30ECD4E14CC360A4, 0x0E89FEA594221FE4,
     0xF15C0FA4EEF405A7, 0x9BD1ADD6DE7654AD,
     },
    {
     0x9B246162DCB35A42, 0xF9FC3F2AA4F190A2,
     0xE579F363DD184EF3, 0x3697CE32861F2867,
     },
    {
     0x6A3AF61DA58B0BF6, 0x1601010D2F432FF9,
     0xFAAFEB030B9A155A, 0x876C2719CB0BD2FD,
     },
    {
     0xAA63053F3D8913FE, 0x2D8A321A2222AC2A,
     0x774CAFB78BAB8876, 0xBBDF3EAD159C3025,
     },
    {
     0xCAD3545653D8D0D9, 0xA0AB2F57077DCFEC,
     0x5851D1ED8DD0A6D1, 0x77D6A9EB074D3899,
     },
    {
     0xF4F47D4FA0C26D6F, 0xB6BA6608A9EFC912,
     0xB07ACD45C19C9027, 0x57300F318396D037,
     },
    {
     0x3251AEA4E168EEF6, 0x06365AC742477CD8,
     0x2476DCF6EDF83898, 0x75F2444882DC3735,
     },
    {
     0xA518EB50AA06B143, 0x41DF3D31181EA7AA,
     0x17D6EC27AE1AD626, 0x121DDB5ADFDDD8B1,
     },
    {
     0xF13FF7D0102094CA, 0xF2DACA808A2EEB16,
     0x53005D3652C5336B, 0xEB56664E3F2C3545,
     },
    {
     0xB2C09392A3271DC9, 0x020E4F001E641541,
     0x5E7C2CDCE9AB730A, 0x6D9D557A5BEAA9D8,
     },
    {
     0x2982C99B6749CAF4, 0x134EF68C99649647,
     0x80146F961CC7E8A4, 0x02242E1A08302BCC,
     },
    {
     0x915F038828443BBA, 0x19534334173E32B7,
     0x52CC3282774949C5, 0x4416F7130DD99A41,
     },
    {
     0x943FF7B6B53C610D, 0x9165821263CEA635,
     0xED2E1944C63496BF, 0x998191922C54F367,
     },
    {
     0xD8C060E30582105A, 0x76FC2E185858AB9C,
     0xE7ECE81EDFA2DDAB, 0x91BC4DA31DE012E6,
     },
    {
     0x448B3EAA3492D812, 0x79FDC8D7A7F76B5C,
     0x01095DFBC412DC9D, 0x82111ABFCFF3C6BA,
     },
    {
     0x85A33C768C8F5E23, 0xD8C49DCE138F5AB1,
     0x6C9A3B8AC4702F8A, 0xDB4708FB82FE98AD,
     },
    {
     0x58C46306E0ED87FA, 0xD30F0E1F11BC7479,
     0xC975287CCCD19AAD, 0x9FC1C7B07CC8B53D,
     },
    {
     0x629D116F4EB37C32, 0x277FA80DF66378D2,
     0x83E56BBCA29FBBA4, 0x696A5D4CBB9019C3,
     },
    {
     0x0BB6416CC58B20C5, 0x4063C3F972FF9EE3,
     0xBE1CB7C7875809F4, 0x28DCE3BA7119E51C,
     },
    {
     0xD1C063B8FFB765F7, 0x56E97BFD311A100C,
     0xEEC6840563C8ABE4, 0x97BF976248A2B3E7,
     },
    {
     0x4C94BEF95F196030, 0x289E0BC599040147,
     0x68FFA3F72FD9B693, 0xB990D4E53688F239,
     },
    {
     0x5B644CF1F698F99F, 0x1850B44A6E774F61,
     0xE97095448A8C0496, 0x344B1EC3BD1BFD22,
     },
    {
     0x6B4EE7CD09DB54D0, 0xCCEC6F57E83B336B,
     0x9B7D81519BFE6360, 0x6A3E792CF59CF5DF,
     },
    {
     0xE24379455189AD38, 0x97ACF1A425F5E459,
     0x626956605612807F, 0xFE13B356E1CA4ABD,
     },
    {
     0x3FD68571E930373B, 0xBC61474C0923EC21,
     0x903F35FFB69DDB86, 0x65914EC0164A7FEB,
     },
    {
     0x8FA2D94EF8358BC8, 0x1E25176355AAA714,
     0x2EDB0CE9F178EA45, 0x7E8F1DE03242F2CE,
     },
    {
     0x8ACFE6BA7840504A, 0xF33AEB667DF482F8,
     0x2F434F33A916C3C2, 0xCA1EDCA33693A427,
     },
    {
     0x9DCBD525A778B0D9, 0xEFB8F569E01FD267,
     0xD6E212A39DB20A6F, 0xB9B86591DECC0F0E,
     },
    {
     0x459552DFE9798ACF, 0xCA6459E2B182C245,
     0x28BF51CB6C2CCBBF, 0x3979B296A4A9EA79,
     },
    {
     0xE10EAB17A35F001E, 0x7CA7B3200148F719,
     0x2C32EFA9FA028167, 0x57F369B1296CD112,
     },
    {
     0x89CEEFF238BAF04B, 0x8FB6D98F50155C8E,
     0xB652BDE52BEC15C7, 0x8BE3D97CAB6F7B0D,
     },
    {
     0x167E33467E4681A9, 0x93D69FC6FBE1E2B7,
     0xBCAC4000B955DBB3, 0x7FAE32F5CEF51811,
     },
    {
     0x0AFF5058CD917DCA, 0x4E9EF8216CF3D32E,
     0x27DE4F1667886B68, 0xB890BAB770592F44,
     },
    {
     0xAE00DAD9E254F25E, 0xF55461E2F9EE09D6,
     0x591ACD1D6A803F87, 0x5CE988CB1CD01577,
     },
    {
     0xD185201D50F949DD, 0xF762AC3BEADD838A,
     0xD857E446D2FFEDC2, 0x1B20FC5E90A6A9D5,
     },
    {
     0x0449235101191BD8, 0x3398E4BF358C277F,
     0x36A3BC6111E76C80, 0x331FEC4502F76A65,
     },
    {
     0x35037D88B94E088C, 0x963148A8CEBECD6F,
     0x35D56A7B1BBF8EDB, 0x7802982E63E1C7E8,
     },
    {
     0x58ADD649740F1EBD, 0xF39E0C2D1CBDBBCA,
     0x04CDDB1F75D972FC, 0xA1D6348790B0CE34,
     },
    {
     0x623249FE131B3C81, 0x78760158A7E1B35A,
     0xF8142E0767A521AD, 0x47900AE26069D61B,
     },
    {
     0x60FA8416B6312AEB, 0x35F2F4EF9ACC0919,
     0x98155AC57FBBF69C, 0x71653090200C6EB1,
     },
    {
     0x0D363E56922F9CE5, 0x7CECAAC1E888AD7C,
     0x06EA50D526F281E0, 0x5D27CA261E55D0E0,
     },
    {
     0x91B3149878C77726, 0xB7A16BD75A7A7A53,
     0xC7C5087C6901866F, 0xEC9930B24F4C1CAB,
     },
    {
     0x61DCF9CE22AF834B, 0xB3BF12A6A15DAF7B,
     0xA4EBADDAE3003610, 0x04416D4FC2484A6B,
     },
    {
     0x5AA93EAB0537F91A, 0x67FED2236708DA13,
     0x930FB6BC473112B8, 0xADC45241D3478EA5,
     },
    {
     0x0814E5D2C0D4636B, 0xBF5257F90E3635D9,
     0x31E67C9D7277ED55, 0x4F8BB29842C9C137,
     },
    {
     0xCBBE0ED8072AC939, 0x2F22D867CF1D50ED,
     0x6BB6311260EEB4DD, 0x696008B112F23959,
     },
    {
     0x1EFAE3FDF75BB939, 0x5BE380ED8497DAF4,
     0xE86552B7DA15AB84, 0x6494146AAFF69399,
     },
    {
     0x24A24759D0794718, 0x738983CDF95AEDC9,
     0x07F2E4228A7E52D2, 0xE34C31A7AF088BB5,
     },
    {
     0x52D8035309642297, 0xC2952F1CAA159077,
     0x23B6BC33129726FB, 0x5E0A8AA37E0050B2,
     },
    {
     0x1FF4E1E77697770F, 0xF78D5353148EFEF5,
     0x1C9EE09F2D9153DA, 0x5880EA485BB3BEB9,
     },
    {
     0x9D2C99232D8BA1B8, 0xC1F736E24BA91FD3,
     0xFBC7C1EFCD3EBB6D, 0xC0EDEDD935F93364,
     },
    {
     0x838123491D8D2BF7, 0xC1CC94A15D232326,
     0x11648CD4E5A7CBD7, 0x8A084CE28DDE7FE7,
     },
    {
     0x874DD33CFF73C483, 0x03FAB6AB0F1C78D6,
     0x744F9DC061872143, 0x532E6BA513614F35,
     },
    {
     0x5DA39D1A7D7EAB01, 0x08BB155D3025534C,
     0x1ED6A6AB4E97EF48, 0xA94DA9E97B7C58F4,
     },
    {
     0x2088319145C08E9B, 0x9AA4EDF5FD723ECD,
     0x520B7EF66F7C3C85, 0x18AB789BC121DB38,
     },
    {
     0x27D2EECD18F25647, 0x22AB0E1D23C78A25,
     0x0C92673684FD2C1E, 0xDAE03D563B1E664F,
     },
    {
     0xEA91ADC7B9C849F1, 0x4E3EE8801DDD0DE6,
     0xA2A135B013957440, 0x33CA5124DFB176AC,
     },
    {
     0x4BA875392B2A6C36, 0x81148E34054E3050,
     0x3BFF9A293E4CC574, 0x24855F3A00C98650,
     },
    {
     0x8A72A2432CACCB21, 0x570C7DFCB64B9213,
     0x0CD58FF6D0C0D04C, 0x44CBC996067DF9BA,
     },
    {
     0xB62E4B9BC552BD43, 0x19B5B936D92C32D6,
     0x38161D2DDC367B7E, 0x98B3CDCBF6623063,
     },
    {
     0x356FB019158BE21E, 0xADCDD3C03E98913A,
     0x1930E8FDF5FBC92E, 0xD1373734DA5D5FB2,
     },
    {
     0xDF2900D19DAD7E39, 0x8DD746EF20FF2DC6,
     0xA748392E77491927, 0x8541187E0F058A03,
     },
    {
     0x6F01BB99FD974167, 0x95CEBA66348F407F,
     0xE446214AB36D3FE9, 0x1B301B49DDE8D4C0,
     },
    {
     0xDF02A0F8D0AB0C49, 0x8DCE3F3E4F0113C8,
     0xD887772A6B021AB1, 0x1E67F3D699C7138A,
     },
    {
     0xC3D29B7B1E1FD743, 0x4C8089B74D878584,
     0x1E37E16EC5D5F56F, 0xB90FF28A25FCF015,
     },
    {
     0x5678FEE6B891F8B4, 0xB9AADA1CF1448C99,
     0x42E70CE957DFDE30, 0x16F97AE532367B96,
     },
    {
     0x1CB0DB7087DE8C03, 0x4F296816C3DC38CA,
     0x619D5E8294E247D5, 0x4F27D073A9FBBCB5,
     },
    {
     0x28D9B7A41B485A5A, 0x486399B4402A2655,
     0x258905DF17EF5AEC, 0x7671B88A08A0D748,
     },
    {
     0x86FF14C2C034D834, 0xD9134B9384336A69,
     0x05845D76737ECD60, 0x3136E29CF7B6894B,
     },
    {
     0xA8B50845261A26A0, 0xD871E6A6CE6B5E97,
     0x39C064FDA4898C6D, 0x98CF31FE90E4B5E6,
     },
    {
     0xAEAEF4B2321AA3C3, 0x67F97056082D37BD,
     0xBA44B6853F2A92F3, 0x2AE9AFE5ED5CD209,
     },
    {
     0xD92B2B36258057E8, 0xD19B09F048F8BDD8,
     0x246DC70A5850EE09, 0x7B42432A702899F1,
     },
    {
     0x5FA6E5C46481D4FB, 0xD46BE80B6936CA07,
     0x8087C87F1394E6A3, 0xAC1885126CD9EFED,
     },
    {
     0x2CEEADD9E2EDE59C, 0x1E5D732BFDED3993,
     0x9004A388E70FF283, 0xD72D8F6770EC4D63,
     },
    {
     0xB64D7389B63887F0, 0xF4A6D6B8DCD5EF3F,
     0x0A469DB03BF0CEEB, 0xB75DEEEBF46BCF6E,
     },
    {
     0xC33EA5DFC0D99063, 0x466CAC68EDCE89A8,
     0xB43D9522682AF818, 0xAC6F8C36C2843141,
     },
    {
     0x34C3DBDB836E361B, 0xE1B5E157D522E046,
     0xB4290156FF78CE93, 0x0C1CB9B706151E86,
     },
    {
     0x8878DB7B9595CA09, 0xD787856A56075DDF,
     0xF2153C1F3A5546DF, 0x1E2769490023F337,
     },
    {
     0xFF1BA86C2E1A98B7, 0xE4D83F01E2F386F4,
     0xF544C5253EB7D298, 0x91D4896A525D1952,
     },
    {
     0xC2576F22EDB391FA, 0xAC8B65CD32F150D9,
     0x2C7FB4D3C5914389, 0xCA3C105ECF5DBCC7,
     },
    {
     0x640A9CE635F5CD9F, 0x870CCA632A5E8730,
     0x5CE28A1D65051197, 0x0BF48FFFD0AB7157,
     },
    {
     0x5FBA208B1E937C0C, 0x6D71C086B7F3BCF4,
     0x28D44DB96FBE9640, 0xDB858F030A09183B,
     },
    {
     0x2FDDFC60F39EEAD0, 0xF364352BDDCA16E7,
     0xFDFF4E9B09E66E0B, 0xACA5D1DC818DE780,
     },
    {
     0xE5C5F277E3C37C19, 0xC784E98AC8567C2B,
     0xB501363EA3A2AA13, 0x7E5024C6518D8BEC,
     },
    {
     0xDD3E0CA5DB9556E2, 0x12962DFC52773657,
     0xCCDB7C73B53F23C5, 0x9693FF8F93FD7A52,
     },
    {
     0xD4A79848CBD7EC39, 0x9EB706594D4B409D,
     0xB12425A48DC6DD02, 0x04C6D4A13DD2B35B,
     },
    {
     0x33D769C56D8B9FE0, 0x551F3581CE7F0AB1,
     0xC0488B43BF28194D, 0x148171F31CF4BE23,
     },
    {
     0x522AA17820D78272, 0x190F11CAB91C0E62,
     0x94810C7FD2ACCEEF, 0x3DB663DC4146C486,
     },
    {
     0xF1F35BAC2B8C5ABB, 0x375614F895876B94,
     0x0F4FDA12E92089C0, 0xC70BA8FAB53D3B27,
     },
    {
     0x141A50CA342C562D, 0x95D5192E839B21CC,
     0x19DD1FE3B93F89E8, 0xE4C6B84A6EE9EC73,
     },
    {
     0xB7A68B34836E47FB, 0xA55051F7D267D4A3,
     0x005583EB1367BE46, 0x3260903E89A5FB63,
     },
    {
     0x05D0C0D9E4941807, 0x2534E960DC0D3217,
     0x53123A45B4C479C9, 0x03265EA8FF6EA2C3,
     },
    {
     0x4AD053E83D64A970, 0x07D18F649BB4E134,
     0x3F0AA6B2EB2F5072, 0xAC19D9C41B532AB2,
     },
    {
     0x8D45DB1DF105301A, 0x935CC316731CCFB2,
     0x84D5D0109FA38374, 0x2C1E5659322472D8,
     },
    {
     0xBD32B9C355FA0245, 0xA1ABC5017C497535,
     0x0970991C85C27A35, 0xCD05159A76E187BB,
     },
    {
     0xE9AD7C6D93887712, 0xA54BB412BC65F95A,
     0x849E831BB5F057CF, 0xCE480D8CF3CBD96A,
     },
    {
     0x42FA53FECDCC1D16, 0x044B8447BB346BEF,
     0x8E1398ACF1CBA706, 0xC602DC877CB8C36C,
     },
    {
     0x811B6FA40E3B3ABA, 0x98F3BF1930EF7F66,
     0x20BD0619B4E484B1, 0x28042B460DB74E29,
     },
    {
     0xBE2E02EF028EE3B8, 0x07E14F59EA1BF20E,
     0x3DC7B51AD1108AB1, 0xFA53276F2372DB77,
     },
    {
     0x4F2D77C6AA4F0B18, 0x50156A7BAC84D9CF,
     0x2ADFF63C0C47ADC5, 0x4C3C4B9D28513863,
     },
    {
     0x10011C1DFB3D8C4D, 0x99573B952D2FF5D1,
     0x0281100C5911F920, 0x3FEC01830E35DB44,
     },
    {
     0x8211241F58A77DDA, 0x74D973AC5F30D925,
     0xE359734835B19DB5, 0x7402A63AC6188904,
     },
    {
     0xEB80271EFCF094F2, 0xECF8B5135278F2E2,
     0xEFCD647E97EC3987, 0x71B406FF55DA8172,
     },
    {
     0x47B817BF6098C1F2, 0xD5CDBAF68B44B698,
     0xEBD60B68DA3FD86C, 0x4BAF2CA8D584D99D,
     },
    {
     0xD8A119B584F85EA3, 0x5F4925F2B703AD3E,
     0xFF5D4FCFDE5FD857, 0x9448AA5BFB777DC9,
     },
    {
     0x25A69B1847BEE60C, 0x7F3DA12AD54D90E6,
     0xAC2FDAF9F906FC5E, 0x4AEDF42094219D89,
     },
    {
     0x64C2E28AF7212033, 0xE5CE6A9341D2B56D,
     0x28686373B4D489B0, 0x5CF41658CFDA30B9,
     },
    {
     0x0A4C2C97A8CB55D7, 0xF5D729FBC05AA8A5,
     0xBC8C0DAF441B32AA, 0xDD171E876B1626B0,
     },
    {
     0xC1768D0D95F7351E, 0x55D5E3665EBDF830,
     0x588B536DE5773280, 0x0A29AF3E1F2B2790,
     },
    {
     0x93D6C1ACD68A17BA, 0xD2A8E66E399C0922,
     0xCEED8E861441A9AF, 0x9C16AA33852A4B6A,
     },
    {
     0x88DF42A94E4B7F21, 0x2CE66EBFCFB9C5D6,
     0x5D025C14A38BE6A6, 0xF259394E04446600,
     },
    {
     0xE8A81AA70BA046E8, 0xCD19982FD7E1A0F0,
     0x6AA5239C9C02619B, 0x7181D7D9396564D5,
     },
    {
     0x6AA05DED062F0820, 0xCE215FE407926127,
     0xB122168C9D211667, 0x405F6E9BE4417AB4,
     },
    {
     0x68862F01A0333945, 0x48D9BD3E821B80EF,
     0x95C42E0E1044042A, 0xC8B8BD5BD0912E70,
     },
    {
     0xF60D7E1FDB601A9A, 0x73B68246B84F41E7,
     0x9C9B8DC2437122BB, 0x7DDCD137DBC41FA0,
     },
    {
     0xBCD1BE02C16B2556, 0xB430D3CB28E584FD,
     0x80C8BFD4E99CCA44, 0x52B34F42D5CA4C8F,
     },
    {
     0xA49DDF24E1AFDA8E, 0x4AD4C90CCA84332F,
     0x3BB95E4409DA466E, 0x51ECFB89D885F39E,
     },
    {
     0xEA5294BDC6228F02, 0x31960F86795B3AB4,
     0xEEACAE7AC82EBDA2, 0x206F3EE50F621C57,
     },
    {
     0xFB73C662A599343F, 0x926703E746504BE6,
     0x0F5F4435FA8EF30C, 0xD818E2D822FB78D9,
     },
    {
     0x3261E77B24505BDC, 0x9FC3E8A9F0CB8950,
     0xB6472AC0FCB91440, 0x4EA24D8E69851118,
     },
    {
     0x1B26EC7FE47FF8EA, 0x16A277504FBE41C9,
     0x728FB44155A889B5, 0x56743990BDCCB4EF,
     },
    {
     0x4A0942AAAE4CE815, 0xB7C49D8F55DE3924,
     0x73C84FE83C45A38D, 0x2FA84C5F32C22952,
     },
    {
     0xDABC589EEE2EF1BA, 0xEAB4888B5FBFA640,
     0x8A34A9B3E0A91889, 0x1B49F16451C15E07,
     },
    {
     0x82C04F7942BA151D, 0xA3DE9FB0F3EEA87A,
     0x781302CADADA85BB, 0xC5F6DF8B007FA19D,
     },
    {
     0xF9A22EC77E97814D, 0x4B6A1D3A2A568F6E,
     0x33BA946C2F5A0E28, 0xD9556B7B655187A6,
     },
    {
     0x7C53890F7F8B8BED, 0xFF66F57E45386D0A,
     0x86C60FCEF824641A, 0xA20AFE5C8CE3A951,
     },
    {
     0xA24594CE773ADBE2, 0x52AE157B1753C746,
     0x62AD7D245FDA9B0E, 0x768352692E3EC8B1,
     },
    {
     0x38EAD19F53022F5E, 0xE0C4E99D83C62CAA,
     0xCA966AB500D890AC, 0xC0E6F5159F04E9F9,
     },
    {
     0x1D65B9A70EE4123D, 0x6B5BC77B2D60CD67,
     0x402B8B85C82BC905, 0x0F244F180768C0AD,
     },
    {
     0x5C86C06B68A6919B, 0x26309E4F3F0C7A16,
     0x6DD9A8DC3778E2E8, 0x88D1E076574F9C3D,
     },
    {
     0xEE6263E79DADBC87, 0xC910188730F5D240,
     0xF9CF12889FFE2C82, 0x820BF03D4A530F65,
     },
    {
     0x25D02261975BBC42, 0xC549C5766A6E8678,
     0x81A19C1FE5650703, 0x99E37D5AB74435B9,
     },
    {
     0x1DEF2772322F6F36, 0x100432EC0E1714E3,
     0x04B76CA14295F36E, 0xE90AF8059D4FB594,
     },
    {
     0x6346E5156610B060, 0x975E3C56579810F3,
     0x760843CCDEE94D4A, 0xF81FBFE9EFB42CF3,
     },
    {
     0x0712FC56B3A5F601, 0x0C30E3EB90691AC3,
     0x5569910C3783DA37, 0x0C230F528392287B,
     },
    {
     0x90FE9A505EA7E119, 0xE1372EFEE096A27B,
     0xC53218A55D553A69, 0xC4DE0E2AD7C949EF,
     },
    {
     0xFC3F7D5FEBF96EE5, 0xD1ACDB3E06088D5B,
     0xBF931CA55133F2F5, 0x63BDB00034FDD97C,
     },
    {
     0xDD44C7CA486CE430, 0x358434087B43C03A,
     0x0C29F7816FE9EE34, 0x182F165190FE82CA,
     },
    {
     0xD285313B9BF578C1, 0x3CC0F317DEF7EBB1,
     0x20B32285515C4EFE, 0xA870438FF79DF687,
     },
    {
     0xF9C2E1014EBCBD5E, 0xCD5463AE56D821DA,
     0xD3AC00CB7B675B02, 0x673309E15B0FC813,
     },
    {
     0x1888F07F7AE14225, 0xD2DE6DD7990FD88F,
     0xA42C82FC7A8EAC7A, 0x896E5A850BF358DC,
     },
    {
     0x72DA40C357747228, 0x668AC2D6FDD2E462,
     0x2EA9B17CFDF0A107, 0x4265BFE7C5C15D6F,
     },
};

GTEST_TEST(city_hash, hash_crc_256_from_null_ptr)
{
    constexpr uint64 expected_result[4] = {0x95162F24E6A5F930, 0x6808BDF4F1EB06E0, 0xB3B1F3A67B624D82, 0xC9A62F12BD4CD80B};

    uint64 result[4] = {0};
    CityHashCrc256(nullptr, 0, result);
    GTEST_ASSERT_EQ(result[0], expected_result[0]);
    GTEST_ASSERT_EQ(result[1], expected_result[1]);
    GTEST_ASSERT_EQ(result[2], expected_result[2]);
    GTEST_ASSERT_EQ(result[3], expected_result[3]);
}

GTEST_TEST(city_hash, hash_crc_256_no_seed)
{
    char key[256] = {0};
    for (int index = 0; index < 256; index++)
    {
        key[index] = index;
        uint64 result[4] = {0};
        CityHashCrc256(key, index, result);
        GTEST_ASSERT_EQ(result[0], CITY_HASH_CRC_128_RESULTS[index][0]);
        GTEST_ASSERT_EQ(result[1], CITY_HASH_CRC_128_RESULTS[index][1]);
        GTEST_ASSERT_EQ(result[2], CITY_HASH_CRC_128_RESULTS[index][2]);
        GTEST_ASSERT_EQ(result[3], CITY_HASH_CRC_128_RESULTS[index][3]);
    }
}

GTEST_TEST(city_hash, hash_crc_256_from_str_lipsum)
{
    constexpr uint64 expected_result[4] = {0x78CBA68E16E7EE3F, 0xB4A4832CED7C0189, 0xAE1B425C6903552B, 0x283D71A63BDE9886};
    uint64 result[4] = {0};
    CityHashCrc256(LIPSUM, strlen(LIPSUM), result);
    GTEST_ASSERT_EQ(result[0], expected_result[0]);
    GTEST_ASSERT_EQ(result[1], expected_result[1]);
    GTEST_ASSERT_EQ(result[2], expected_result[2]);
    GTEST_ASSERT_EQ(result[3], expected_result[3]);
}

#endif