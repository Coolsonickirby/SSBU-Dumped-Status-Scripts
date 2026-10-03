
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100035830(L2CValue *param_1,L2CValue *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  BattleObjectModuleAccessor *pBVar7;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  uVar2 = lib::L2CValue::as_integer(param_1);
  bVar1 = app::sv_battle_object::is_active(uVar2);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    return;
  }
  uVar2 = lib::L2CValue::as_integer(param_1);
  pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar2);
  if (pvVar6 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack96,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,pvVar6);
  }
  uVar5 = lib::L2CValue::operator==(aLStack96,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  if ((uVar5 & 1) != 0) goto LAB_7100035bb4;
  uVar2 = lib::L2CValue::as_integer(param_2);
  bVar1 = app::sv_battle_object::is_active(uVar2);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar5 = lib::L2CValue::operator==(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) goto LAB_7100035bb4;
  uVar2 = lib::L2CValue::as_integer(param_2);
  pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar2);
  if (pvVar6 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack112,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,pvVar6);
  }
  uVar5 = lib::L2CValue::operator==(aLStack112,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  if ((uVar5 & 1) == 0) {
    uVar2 = lib::L2CValue::as_integer(param_1);
    uVar2 = app::sv_battle_object::kind(uVar2);
    lib::L2CValue::L2CValue(aLStack128,uVar2);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_KIND_PICKEL_STONE);
    uVar5 = lib::L2CValue::operator==(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_KIND_PICKEL_PLATE);
      uVar5 = lib::L2CValue::operator==(aLStack128,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_PICKEL_PLATE_INSTANCE_WORK_ID_INT_PREV);
        iVar3 = lib::L2CValue::as_integer(param_2);
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
        app::lua_bind::WorkModule__set_int_impl(pBVar7,iVar3,iVar4);
        goto LAB_7100035a58;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_PICKEL_STONE_INSTANCE_WORK_ID_INT_PREV);
      iVar3 = lib::L2CValue::as_integer(param_2);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
      app::lua_bind::WorkModule__set_int_impl(pBVar7,iVar3,iVar4);
LAB_7100035a58:
      lib::L2CValue::~L2CValue(aLStack80);
    }
    uVar2 = lib::L2CValue::as_integer(param_2);
    uVar2 = app::sv_battle_object::category(uVar2);
    lib::L2CValue::L2CValue(aLStack144,uVar2 & 0xff);
    lib::L2CValue::L2CValue(aLStack80,_BATTLE_OBJECT_CATEGORY_ITEM);
    uVar5 = lib::L2CValue::operator==(aLStack144,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((uVar5 & 1) == 0) {
      uVar2 = lib::L2CValue::as_integer(param_2);
      uVar2 = app::sv_battle_object::kind(uVar2);
      lib::L2CValue::L2CValue(aLStack144,uVar2);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_KIND_PICKEL_STONE);
      uVar5 = lib::L2CValue::operator==(aLStack144,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_KIND_PICKEL_PLATE);
        uVar5 = lib::L2CValue::operator==(aLStack144,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_WEAPON_PICKEL_PLATE_INSTANCE_WORK_ID_INT_NEXT);
          iVar3 = lib::L2CValue::as_integer(param_1);
          iVar4 = lib::L2CValue::as_integer(aLStack80);
          pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
          app::lua_bind::WorkModule__set_int_impl(pBVar7,iVar3,iVar4);
          goto LAB_7100035b94;
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_PICKEL_STONE_INSTANCE_WORK_ID_INT_NEXT);
        iVar3 = lib::L2CValue::as_integer(param_1);
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
        app::lua_bind::WorkModule__set_int_impl(pBVar7,iVar3,iVar4);
LAB_7100035b94:
        lib::L2CValue::~L2CValue(aLStack80);
      }
      lib::L2CValue::~L2CValue(aLStack144);
    }
    lib::L2CValue::~L2CValue(aLStack128);
  }
  lib::L2CValue::~L2CValue(aLStack112);
LAB_7100035bb4:
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

