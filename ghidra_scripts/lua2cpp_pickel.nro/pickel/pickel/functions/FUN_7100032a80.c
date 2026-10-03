
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100032a80(L2CValue *param_1,L2CValue *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  void *pvVar5;
  BattleObjectModuleAccessor *pBVar6;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  uVar2 = lib::L2CValue::as_integer(param_2);
  bVar1 = app::sv_battle_object::is_active(uVar2);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    uVar2 = lib::L2CValue::as_integer(param_2);
    uVar2 = app::sv_battle_object::category(uVar2);
    lib::L2CValue::L2CValue(aLStack80,uVar2 & 0xff);
    lib::L2CValue::L2CValue(aLStack64,_BATTLE_OBJECT_CATEGORY_ITEM);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      uVar2 = lib::L2CValue::as_integer(param_2);
      pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar2);
      if (pvVar5 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack64,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,pvVar5);
      }
      uVar4 = lib::L2CValue::operator==(aLStack64,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_WEAPON_PICKEL_STONE_INSTANCE_WORK_ID_INT_PREV);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack64);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(pBVar6,iVar3);
        lib::L2CValue::L2CValue(aLStack80,iVar3);
        lib::L2CValue::operator=(param_2,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack112,param_2);
        FUN_7100032a80(param_1,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
      }
      else {
        lib::L2CValue::L2CValue(param_1,false);
      }
      lib::L2CValue::~L2CValue(aLStack64);
    }
    else {
      lib::L2CValue::L2CValue(param_1,true);
    }
  }
  else {
    lib::L2CValue::L2CValue(param_1,false);
  }
  return;
}

