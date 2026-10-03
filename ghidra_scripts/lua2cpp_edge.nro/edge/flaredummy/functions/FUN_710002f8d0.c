
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002f8d0(L2CValue *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  void *pvVar5;
  BattleObjectModuleAccessor *pBVar6;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_EDGE_FLAREDUMMY_LINK_NO_TARGET);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  uVar3 = app::lua_bind::LinkModule__get_parent_id_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,true);
  lib::L2CValue::L2CValue(aLStack80,uVar3);
  lib::L2CValue::~L2CValue(aLStack64);
  uVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::sv_battle_object::is_active(uVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar4 = lib::L2CValue::operator==(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(param_1,true);
    goto LAB_710002fa8c;
  }
  uVar3 = lib::L2CValue::as_integer(aLStack80);
  pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar3);
  if (pvVar5 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack96,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,pvVar5);
  }
  pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
  iVar2 = app::lua_bind::StatusModule__status_kind_next_impl(pBVar6);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_DEAD);
  uVar4 = lib::L2CValue::operator==(aLStack112,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_STANDBY);
    uVar4 = lib::L2CValue::operator==(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) goto LAB_710002fa70;
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_FINAL);
    uVar4 = lib::L2CValue::operator==(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) goto LAB_710002fa70;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_DRAGOON_RIDE);
    uVar4 = lib::L2CValue::operator==(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) goto LAB_710002fa70;
    lib::L2CValue::L2CValue(param_1,false);
  }
  else {
LAB_710002fa70:
    lib::L2CValue::L2CValue(param_1,true);
  }
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
LAB_710002fa8c:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

