
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponKroolIronball::status::Hop_main_loop(L2CWeaponKroolIronball *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  HitStatus HVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  Hash40 HVar8;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar6 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_KROOL_IRONBALL_INSTANCE_WORK_ID_FLAG_HOP_ATTACK_CLEAR)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack64,HIT_STATUS_OFF);
      HVar4 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar4,0);
    }
    else {
      app::lua_bind::AttackModule__clear_all_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack64,_HIT_STATUS_XLU);
      HVar4 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar4,0);
    }
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar6 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_KROOL_IRONBALL_STATUS_KIND_END);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack64);
      iVar3 = 1;
      goto LAB_7100030ff0;
    }
    lib::L2CValue::L2CValue(aLStack80,_GROUND_TOUCH_FLAG_ALL);
    uVar5 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::GroundModule__is_floor_touch_line_impl(this->moduleAccessor,uVar5);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,0xe06ed07db);
      lib::L2CValue::L2CValue(aLStack96,0xbfd5c9450);
      uVar6 = lib::L2CValue::as_integer(aLStack64);
      uVar7 = lib::L2CValue::as_integer(aLStack96);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_KROOL_IRONBALL_INSTANCE_WORK_ID_INT_BOUND_NUM);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack64,iVar3);
      uVar6 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,_WEAPON_KROOL_IRONBALL_STATUS_KIND_END);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xa0);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        lib::L2CValue::_L2CValue(aLStack80);
        return;
      }
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_KINETIC_TYPE_KROOL_IRONBALL_HOP);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_KROOL_IRONBALL_INSTANCE_WORK_ID_INT_BOUND_NUM);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue
                (aLStack112,_WEAPON_KROOL_IRONBALL_INSTANCE_WORK_ID_INT_BOUND_EFFECT_NUM);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::L2CValue(aLStack64,0);
      uVar6 = lib::L2CValue::operator__(aLStack96,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,_WEAPON_ANIMCMD_EFFECT);
        lib::L2CValue::L2CValue(aLStack96,0xc61ff5239);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        HVar8 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                  (this->moduleAccessor,iVar3,HVar8,-1);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue
                  (aLStack64,_WEAPON_KROOL_IRONBALL_INSTANCE_WORK_ID_INT_BOUND_EFFECT_NUM);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack64);
      }
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  iVar3 = 0;
LAB_7100030ff0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

