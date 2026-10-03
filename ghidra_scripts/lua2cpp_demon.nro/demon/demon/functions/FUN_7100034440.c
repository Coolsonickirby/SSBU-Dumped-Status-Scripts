
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100034440(L2CValue *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEMON_STATUS_SPECIAL_LW_INT_PARAM_ID_HASH);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  lVar2 = app::lua_bind::WorkModule__get_int64_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack80,lVar2);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DEMON_STATUS_SPECIAL_LW_INT_CAPTURE_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128,0x11753c19d4);
  uVar3 = lib::L2CValue::as_integer(aLStack80);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack112,iVar1);
  lib::L2CValue::~L2CValue(aLStack128);
  uVar3 = lib::L2CValue::operator<=(aLStack112,aLStack96);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DEMON_STATUS_SPECIAL_LW_INT_CAPTURE_FRAME);
    iVar1 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__inc_int_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack144,0xbe0cd7d7e);
    lib::L2CValue::L2CValue(aLStack160,0xe6791f7fd);
    lib::L2CValue::L2CValue(aLStack176,0xe5b9cc8a4);
    lib::L2CValue::L2CValue(aLStack192,0xe9ee868f1);
    lib::L2CValue::L2CValue(aLStack208,0xff2e28eab);
    lib::L2CValue::L2CValue(aLStack224,0xfceefb1f2);
    lib::L2CValue::L2CValue(aLStack240,0xf0b9b11a7);
    lib::L2CValue::L2CValue(aLStack256,0xcfdf19f24);
    FUN_71000347b0(param_2,aLStack144,aLStack160,aLStack176,aLStack192,aLStack208,aLStack224,
                   aLStack240,aLStack256);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(param_1,0);
  }
  else {
    lib::L2CValue::L2CValue(param_1,0);
  }
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

