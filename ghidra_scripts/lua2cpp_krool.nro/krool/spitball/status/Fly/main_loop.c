
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponKroolSpitball::status::Fly_main_loop(L2CWeaponKroolSpitball *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  BattleObjectModuleAccessor *pBVar7;
  Hash40 HVar8;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_KROOL_SPITBALL_INSTANCE_WORK_ID_FLAG_SHOW_OWNER);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) == 0) goto LAB_7100032e34;
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_LINK_NO_CONSTRAINT);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_LINK_NO_CONSTRAINT);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    uVar4 = app::lua_bind::LinkModule__get_parent_id_impl(this->moduleAccessor,iVar3,true);
    lib::L2CValue::L2CValue(aLStack80,uVar4);
    lib::L2CValue::_L2CValue(aLStack64);
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::sv_battle_object::is_null(uVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar5 & 1) == 0) {
LAB_7100032dcc:
      lib::L2CValue::_L2CValue(aLStack96);
    }
    else {
      uVar4 = lib::L2CValue::as_integer(aLStack80);
      bVar1 = app::sv_battle_object::is_active(uVar4);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar2 & 1U) != 0) {
        uVar4 = lib::L2CValue::as_integer(aLStack80);
        pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar4);
        if (pvVar6 == (void *)0x0) {
          lib::L2CValue::L2CValue(aLStack96,(L2CValue *)&LINK_ATTRIBUTE_REFERENCE_PARENT_SLOW);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,pvVar6);
        }
        pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
        iVar3 = app::lua_bind::StatusModule__status_kind_impl(pBVar7);
        lib::L2CValue::L2CValue(aLStack112,iVar3);
        lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_DEAD);
        uVar5 = lib::L2CValue::operator__(aLStack112,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_STANDBY);
          uVar5 = lib::L2CValue::operator__(aLStack112,aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_GIMMICK_BARREL);
            uVar5 = lib::L2CValue::operator__(aLStack112,aLStack64);
            lib::L2CValue::_L2CValue(aLStack64);
            if ((uVar5 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack64,_WEAPON_LINK_NO_CONSTRAINT);
              lib::L2CValue::L2CValue(aLStack128,0x138ceab760);
              iVar3 = lib::L2CValue::as_integer(aLStack64);
              HVar8 = lib::L2CValue::as_hash(aLStack128);
              app::lua_bind::LinkModule__send_event_parents_impl(this->moduleAccessor,iVar3,HVar8);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue(aLStack64);
            }
          }
        }
        lib::L2CValue::_L2CValue(aLStack112);
        goto LAB_7100032dcc;
      }
    }
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_KROOL_SPITBALL_INSTANCE_WORK_ID_FLAG_SHOW_OWNER);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_KROOL_SPITBALL_INSTANCE_WORK_ID_FLAG_RESERVE_SHOW_OWNER)
  ;
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack64);
LAB_7100032e34:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

