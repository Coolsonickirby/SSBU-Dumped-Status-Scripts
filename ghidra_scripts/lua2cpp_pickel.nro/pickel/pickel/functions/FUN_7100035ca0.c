
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100035ca0(undefined8 param_1,undefined8 param_2,L2CValue *param_3,L2CValue *param_4)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  void *pvVar4;
  BattleObjectModuleAccessor *pBVar5;
  Rhombus2 *pRVar6;
  L2CValue *this;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  uVar2 = lib::L2CValue::as_integer(param_3);
  uVar2 = app::sv_battle_object::category(uVar2);
  lib::L2CValue::L2CValue(aLStack96,uVar2 & 0xff);
  lib::L2CValue::L2CValue(aLStack80,_BATTLE_OBJECT_CATEGORY_ITEM);
  uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar3 & 1) != 0) {
    uVar2 = lib::L2CValue::as_integer(param_3);
    pvVar4 = (void *)app::sv_battle_object::module_accessor(uVar2);
    if (pvVar4 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack80,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,pvVar4);
    }
    uVar3 = lib::L2CValue::operator==(aLStack80,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,true);
      bVar1 = lib::L2CValue::as_bool(aLStack96);
      pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack80);
      pRVar6 = (Rhombus2 *)app::lua_bind::GroundModule__get_rhombus_impl(pBVar5,(bool)(bVar1 & 1));
      app::lua_bind::Rhombus2__store_l2c_table_impl(pRVar6);
      lib::L2CValue::~L2CValue(aLStack96);
      this = aLStack80;
      goto LAB_7100035e68;
    }
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack112,param_3);
  FUN_7100032ca0(aLStack96,aLStack112);
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack160,param_3);
    lib::L2CValue::L2CValue(aLStack176,param_4);
    FUN_7100036970(param_1,param_2,aLStack160,aLStack176);
    lib::L2CValue::~L2CValue(aLStack176);
    this = aLStack160;
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,param_3);
    lib::L2CValue::L2CValue(aLStack144,param_4);
    FUN_7100036050(param_1,param_2,aLStack128,aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    this = aLStack128;
  }
LAB_7100035e68:
  lib::L2CValue::~L2CValue(this);
  return;
}

