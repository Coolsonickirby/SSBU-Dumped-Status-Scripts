
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterJack::status::SpecialNBarrage_main(L2CFighterJack *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  Hash40 HVar10;
  ulong uVar11;
  L2CValue *this_00;
  float fVar12;
  float fVar13;
  float fVar14;
  L2CValue aLStack312 [16];
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [24];
  
  lib::L2CValue::L2CValue(aLStack168);
  lib::L2CValue::L2CValue(aLStack200,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_BARRAGE_LW);
  iVar7 = lib::L2CValue::as_integer(aLStack200);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar7);
  lib::L2CValue::L2CValue(aLStack184,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack152,true);
  uVar9 = lib::L2CValue::operator__(aLStack184,aLStack152);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack200);
  if ((uVar9 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack152,0x1525cc734a);
    lib::L2CValue::L2CValue(aLStack184,0.0);
    lib::L2CValue::L2CValue(aLStack200,1.0);
    lib::L2CValue::L2CValue(aLStack216,false);
    HVar10 = lib::L2CValue::as_hash(aLStack152);
    fVar12 = (float)lib::L2CValue::as_number(aLStack184);
    fVar13 = (float)lib::L2CValue::as_number(aLStack200);
    bVar1 = lib::L2CValue::as_bool(aLStack216);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar10,fVar12,fVar13,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::L2CValue(aLStack152,_FIGHTER_JACK_MOTION_PART_SET_KIND_SPECIAL_N_SHOOT);
    lib::L2CValue::L2CValue(aLStack184,0x1be8d07682);
    lib::L2CValue::L2CValue(aLStack200,0.0);
    lib::L2CValue::L2CValue(aLStack216,1.0);
    lib::L2CValue::L2CValue(aLStack232,false);
    lib::L2CValue::L2CValue(aLStack248,false);
    lib::L2CValue::L2CValue(aLStack264,0.0);
    lib::L2CValue::L2CValue(aLStack280,true);
    lib::L2CValue::L2CValue(aLStack296,false);
    lib::L2CValue::L2CValue(aLStack312,false);
    iVar7 = lib::L2CValue::as_integer(aLStack152);
    HVar10 = lib::L2CValue::as_hash(aLStack184);
    fVar12 = (float)lib::L2CValue::as_number(aLStack200);
    fVar13 = (float)lib::L2CValue::as_number(aLStack216);
    bVar1 = lib::L2CValue::as_bool(aLStack232);
    bVar2 = lib::L2CValue::as_bool(aLStack248);
    fVar14 = (float)lib::L2CValue::as_number(aLStack264);
    bVar3 = lib::L2CValue::as_bool(aLStack280);
    bVar4 = lib::L2CValue::as_bool(aLStack296);
    bVar5 = lib::L2CValue::as_bool(aLStack312);
    app::lua_bind::MotionModule__add_motion_partial_impl
              (this->moduleAccessor,iVar7,HVar10,fVar12,fVar13,(bool)(bVar1 & 1),(bool)(bVar2 & 1),
               fVar14,(bool)(bVar3 & 1),(bool)(bVar4 & 1),(bool)(bVar5 & 1));
    lib::L2CValue::_L2CValue(aLStack312);
    lib::L2CValue::_L2CValue(aLStack296);
    lib::L2CValue::_L2CValue(aLStack280);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack232);
  }
  else {
    lib::L2CValue::L2CValue(aLStack152,0x187445dc36);
    lib::L2CValue::L2CValue(aLStack184,0.0);
    lib::L2CValue::L2CValue(aLStack200,1.0);
    lib::L2CValue::L2CValue(aLStack216,false);
    HVar10 = lib::L2CValue::as_hash(aLStack152);
    fVar12 = (float)lib::L2CValue::as_number(aLStack184);
    fVar13 = (float)lib::L2CValue::as_number(aLStack200);
    bVar1 = lib::L2CValue::as_bool(aLStack216);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar10,fVar12,fVar13,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::L2CValue(aLStack152,0);
  lib::L2CValue::L2CValue(aLStack184,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_BUTTON_RAPID_COUNT);
  iVar7 = lib::L2CValue::as_integer(aLStack152);
  iVar8 = lib::L2CValue::as_integer(aLStack184);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar7,iVar8);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::L2CValue(aLStack200,_FIGHTER_JACK_STATUS_SPECIAL_N_FLAG_BARRAGE_LW);
  iVar7 = lib::L2CValue::as_integer(aLStack200);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar7);
  lib::L2CValue::L2CValue(aLStack184,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack152,false);
  uVar9 = lib::L2CValue::operator__(aLStack184,aLStack152);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack200);
  if ((uVar9 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack184);
    lib::L2CValue::L2CValue(aLStack216,_FIGHTER_INSTANCE_WORK_ID_INT_CUSTOMIZE_SPECIAL_N_NO);
    iVar7 = lib::L2CValue::as_integer(aLStack216);
    iVar7 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar7);
    lib::L2CValue::L2CValue(aLStack200,iVar7);
    lib::L2CValue::L2CValue(aLStack152,0);
    uVar9 = lib::L2CValue::operator__(aLStack200,aLStack152);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack216);
    if ((uVar9 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack152,0x17cc8fd651);
      lib::L2CValue::operator_(aLStack184,aLStack152);
    }
    else {
      lib::L2CValue::L2CValue(aLStack152,0x168ccbb4a0);
      lib::L2CValue::operator_(aLStack184,aLStack152);
    }
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::L2CValue(aLStack200,0xf899192aa);
    uVar9 = lib::L2CValue::as_integer(aLStack200);
    uVar11 = lib::L2CValue::as_integer(aLStack184);
    iVar7 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar9,uVar11);
    lib::L2CValue::L2CValue(aLStack152,iVar7);
    lib::L2CValue::L2CValue(aLStack216,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_BARRAGE_SHOOT_INTERVAL);
    iVar7 = lib::L2CValue::as_integer(aLStack152);
    iVar8 = lib::L2CValue::as_integer(aLStack216);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar7,iVar8);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack200);
    bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack200,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack152,false);
    uVar9 = lib::L2CValue::operator__(aLStack200,aLStack152);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack200);
    if ((uVar9 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack216,false);
      bVar6 = lib::L2CValue::operator_cast_to_bool(aLStack216);
      if ((bVar6 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack152,_FIGHTER_JACK_STATUS_SPECIAL_N_INT_BARRAGE_SHOOT_INTERVAL);
        iVar7 = lib::L2CValue::as_integer(aLStack152);
        app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar7);
        lib::L2CValue::_L2CValue(aLStack152);
      }
      lib::L2CValue::L2CValue(aLStack200,0);
      lib::L2CValue::_L2CValue(aLStack200);
      lib::L2CValue::_L2CValue(aLStack216);
    }
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
    lib::L2CValue::L2CValue(aLStack152,&DAT_71000217c0);
    lib::L2CValue::operator_(this_00,aLStack152);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack184);
  }
  lib::L2CValue::L2CValue(aLStack232,_FIGHTER_INSTANCE_WORK_ID_INT_CUSTOMIZE_SPECIAL_N_NO);
  iVar7 = lib::L2CValue::as_integer(aLStack232);
  iVar7 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar7);
  lib::L2CValue::L2CValue(aLStack184,iVar7);
  lib::L2CValue::L2CValue(aLStack152,0);
  uVar9 = lib::L2CValue::operator__(aLStack184,aLStack152);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack232);
  if ((uVar9 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack184,0x3a40337e2c);
    lib::L2CValue::L2CValue(aLStack232,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_08 + -1);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack184);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack232);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  }
  else {
    lib::L2CValue::L2CValue(aLStack184,0x3a40337e2c);
    lib::L2CValue::L2CValue(aLStack232,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_07 + -1);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack184);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack232);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  }
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::L2CValue(aLStack184,SpecialNBarrage_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x48);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  return;
}

