
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterCloud::status::SpecialLw_main(L2CFighterCloud *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  signed sVar4;
  ulong uVar5;
  L2CValue *this_00;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
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
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_CLOUD_INSTANCE_WORK_ID_FLAG_LIMIT_BREAK);
  iVar3 = lib::L2CValue::as_integer(aLStack240);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar5 = lib::L2CValue::operator__(aLStack224,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0xab6928cf2);
    lib::L2CValue::operator_(aLStack192,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0xe46c0e666);
    lib::L2CValue::operator_(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0xd18269259);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0xd2546bbe9);
    lib::L2CValue::operator_(aLStack208,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,SpecialLw_main_loop);
    lib::L2CValue::operator_(aLStack176,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,true);
    lib::L2CValue::operator_(aLStack144,aLStack80);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0x10ef97f71f);
    lib::L2CValue::operator_(aLStack192,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x146e22785f);
    lib::L2CValue::operator_(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0xfc5119f75);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0xff871b6c5);
    lib::L2CValue::operator_(aLStack208,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,&DAT_710001be40);
    lib::L2CValue::operator_(aLStack176,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,false);
    lib::L2CValue::operator_(aLStack144,aLStack80);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack224,true);
  lib::L2CValue::L2CValue(aLStack240,aLStack192);
  lib::L2CValue::L2CValue(aLStack256,aLStack128);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  FUN_7100018920(this,aLStack224,aLStack240,aLStack256,aLStack272);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator__(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack288,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
    fVar7 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack80,fVar7);
    lib::L2CValue::operator_(aLStack160,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::L2CValue(aLStack304,0x1018dfb2f4);
    uVar5 = lib::L2CValue::as_integer(aLStack304);
    uVar6 = lib::L2CValue::as_integer(aLStack112);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack288,fVar7);
    lib::L2CValue::operator_(aLStack160,aLStack288);
    lib::L2CValue::operator_(aLStack160,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar5 = lib::L2CValue::operator__(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack304,_FIGHTER_CLOUD_INSTANCE_WORK_ID_FLAG_SPECIAL_AIR_LW_BRAKE);
      iVar3 = lib::L2CValue::as_integer(aLStack304);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack288,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar5 = lib::L2CValue::operator__(aLStack288,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack304);
      if ((uVar5 & 1) == 0) goto LAB_710000eb24;
    }
    lib::L2CValue::L2CValue(aLStack288,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
    fVar7 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack80,fVar7);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::L2CValue(aLStack304,0x1018dfb2f4);
    uVar5 = lib::L2CValue::as_integer(aLStack304);
    uVar6 = lib::L2CValue::as_integer(aLStack208);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack288,fVar7);
    lib::L2CValue::operator_(aLStack96,aLStack288);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) goto LAB_710000eb24;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CLOUD_INSTANCE_WORK_ID_FLAG_SPECIAL_AIR_LW_BRAKE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
  }
  else {
    lib::L2CValue::L2CValue(aLStack288,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
    fVar7 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack80,fVar7);
    lib::L2CValue::operator_(aLStack160,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::L2CValue(aLStack288,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
    fVar7 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack80,fVar7);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::L2CValue(aLStack288,0x1018dfb2f4);
    uVar5 = lib::L2CValue::as_integer(aLStack288);
    uVar6 = lib::L2CValue::as_integer(aLStack112);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar7);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::operator_(aLStack160,aLStack80);
    lib::L2CValue::operator_(aLStack160,aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::operator_(aLStack96,aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::L2CValue(aLStack288,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack288);
  }
  lib::L2CValue::_L2CValue(aLStack80);
LAB_710000eb24:
  lib::L2CValue::L2CValue(aLStack288,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_01);
  lib::L2CValue::L2CValue(aLStack304,_FIGHTER_CLOUD_INSTANCE_WORK_ID_FLAG_LIMIT_BREAK_SPECIAL);
  iVar3 = lib::L2CValue::as_integer(aLStack304);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack304);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_07);
    lib::L2CValue::operator_(aLStack288,aLStack80);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_08);
    lib::L2CValue::operator_(aLStack288,aLStack80);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack320,0x20cbc92683);
  lib::L2CValue::L2CValue(aLStack336,1);
  lib::L2CValue::L2CValue(aLStack352,_FIGHTER_LOG_DATA_INT_ATTACK_NUM_KIND);
  lib::L2CValue::L2CValue(aLStack80,1);
  lib::L2CValue::operator_(aLStack288,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack352);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack368);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::L2CValue(aLStack320,0x3a40337e2c);
  lib::L2CValue::L2CValue(aLStack80,1);
  lib::L2CValue::operator_(aLStack288,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::L2CValue(aLStack320,8);
  sVar4 = lib::L2CValue::as_integer(aLStack320);
  app::lua_bind::ControlModule__set_add_jump_mini_button_life_impl(this->moduleAccessor,sVar4);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::L2CValue(aLStack320,aLStack176);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

