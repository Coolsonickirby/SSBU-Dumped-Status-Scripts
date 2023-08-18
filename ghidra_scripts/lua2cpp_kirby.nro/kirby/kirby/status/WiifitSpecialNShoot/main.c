
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::WiifitSpecialNShoot_main(L2CFighterKirby *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  L2CValue *this_00;
  Hash40 HVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,false);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack80,false);
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue
            (aLStack144,_FIGHTER_WIIFIT_INSTANCE_WORK_ID_FLOAT_SPECIAL_N_CHARGE_LEVEL_RATIO);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,fVar8);
  lib::L2CValue::L2CValue(aLStack80,1.0);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,true);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator__(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
    GVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_AIR_STOP);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0x13dece8806);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack160,false);
      HVar6 = lib::L2CValue::as_hash(aLStack80);
      fVar8 = (float)lib::L2CValue::as_number(aLStack128);
      fVar9 = (float)lib::L2CValue::as_number(aLStack144);
      bVar2 = lib::L2CValue::as_bool(aLStack160);
      app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                (this->moduleAccessor,HVar6,fVar8,fVar9,(bool)(bVar2 & 1),0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0x172e422b84);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack160,false);
      HVar6 = lib::L2CValue::as_hash(aLStack80);
      fVar8 = (float)lib::L2CValue::as_number(aLStack128);
      fVar9 = (float)lib::L2CValue::as_number(aLStack144);
      bVar2 = lib::L2CValue::as_bool(aLStack160);
      app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                (this->moduleAccessor,HVar6,fVar8,fVar9,(bool)(bVar2 & 1),0.0,false,false);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0xfd55705d2);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack160,false);
      HVar6 = lib::L2CValue::as_hash(aLStack80);
      fVar8 = (float)lib::L2CValue::as_number(aLStack128);
      fVar9 = (float)lib::L2CValue::as_number(aLStack144);
      bVar2 = lib::L2CValue::as_bool(aLStack160);
      app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                (this->moduleAccessor,HVar6,fVar8,fVar9,(bool)(bVar2 & 1),0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0x1359c86542);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack160,false);
      HVar6 = lib::L2CValue::as_hash(aLStack80);
      fVar8 = (float)lib::L2CValue::as_number(aLStack128);
      fVar9 = (float)lib::L2CValue::as_number(aLStack144);
      bVar2 = lib::L2CValue::as_bool(aLStack160);
      app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
                (this->moduleAccessor,HVar6,fVar8,fVar9,(bool)(bVar2 & 1),0.0,false,false);
    }
  }
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack128,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack144,0x19260c9ff8);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    uVar7 = lib::L2CValue::as_integer(aLStack144);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar8);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar5 = lib::L2CValue::operator_(aLStack80,aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,0x148e71ec03);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
    }
  }
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_WIIFIT_INSTANCE_WORK_ID_FLAG_SPECIAL_N_HOLD_TO_SHOOT);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
  lib::L2CValue::operator_(aLStack144);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_WIIFIT_GENERATE_ARTICLE_SUNBULLET);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar3,false,-1);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_TRANSITION_GROUP_CHK_GROUND_SPECIAL);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__enable_transition_term_group_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_SPECIAL);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__enable_transition_term_group_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,WiifitSpecialNShoot_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

