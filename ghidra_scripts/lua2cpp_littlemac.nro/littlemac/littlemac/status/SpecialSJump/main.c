
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLittlemac::status::SpecialSJump_main(L2CFighterLittlemac *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  Hash40 HVar6;
  ulong uVar7;
  L2CValue *this_00;
  L2CValue *this_01;
  float *pfVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  float fVar11;
  L2CValue aLStack456 [16];
  L2CValue aLStack440 [16];
  L2CValue aLStack424 [16];
  L2CValue aLStack408 [16];
  L2CValue aLStack392 [16];
  L2CValue aLStack376 [16];
  L2CValue aLStack360 [16];
  L2CValue aLStack344 [16];
  L2CValue aLStack328 [16];
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
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [24];
  
  lib::L2CValue::L2CValue(aLStack136,0);
  lib::L2CValue::L2CValue(aLStack152,0);
  lib::L2CValue::L2CValue(aLStack168,0);
  FUN_71000192f0(this);
  lib::L2CValue::L2CValue(aLStack440,_FIGHTER_LITTLEMAC_STATUS_SPECIAL_S_FLAG_IS_BLOW_SHIFT);
  iVar2 = lib::L2CValue::as_integer(aLStack440);
  ppBVar9 = &this->moduleAccessor;
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack440);
  lib::L2CValue::L2CValue(aLStack184,0.0);
  lib::L2CValue::L2CValue(aLStack200,0.0);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack440,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack440);
  lib::L2CValue::_L2CValue(aLStack440);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack440,0x1243e5e5bb);
    lib::L2CValue::L2CValue(aLStack216,0.0);
    lib::L2CValue::L2CValue(aLStack232,1.0);
    lib::L2CValue::L2CValue(aLStack248,false);
    HVar6 = lib::L2CValue::as_hash(aLStack440);
    fVar10 = (float)lib::L2CValue::as_number(aLStack216);
    fVar11 = (float)lib::L2CValue::as_number(aLStack232);
    bVar1 = lib::L2CValue::as_bool(aLStack248);
    app::lua_bind::MotionModule__change_motion_impl
              (*ppBVar9,HVar6,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack440);
    lib::L2CValue::L2CValue(aLStack440,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack216,ENERGY_STOP_RESET_TYPE_AIR);
    lib::L2CValue::L2CValue(aLStack232,0.0);
    lib::L2CValue::L2CValue(aLStack248,0.0);
    lib::L2CValue::L2CValue(aLStack264,0.0);
    lib::L2CValue::L2CValue(aLStack280,0.0);
    lib::L2CValue::L2CValue(aLStack296,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack440);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack216);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack232);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack248);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack264);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack280);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack296);
    app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack296);
    lib::L2CValue::_L2CValue(aLStack280);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack440);
    lib::L2CValue::L2CValue(aLStack232,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack248,0x1ba09693a3);
    uVar5 = lib::L2CValue::as_integer(aLStack232);
    uVar7 = lib::L2CValue::as_integer(aLStack248);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar7);
    lib::L2CValue::L2CValue(aLStack216,fVar10);
    fVar10 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack264,fVar10);
    lib::L2CValue::operator_(aLStack216,aLStack264);
    lib::L2CValue::operator_(aLStack184,aLStack440);
    lib::L2CValue::_L2CValue(aLStack440);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::L2CValue(aLStack216,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack232,0x1b3b33dfcc);
    uVar5 = lib::L2CValue::as_integer(aLStack216);
    uVar7 = lib::L2CValue::as_integer(aLStack232);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar7);
    lib::L2CValue::L2CValue(aLStack440,fVar10);
    lib::L2CValue::operator_(aLStack200,aLStack440);
  }
  else {
    lib::L2CValue::L2CValue(aLStack440,0xe01b71074);
    lib::L2CValue::L2CValue(aLStack216,0.0);
    lib::L2CValue::L2CValue(aLStack232,1.0);
    lib::L2CValue::L2CValue(aLStack248,false);
    HVar6 = lib::L2CValue::as_hash(aLStack440);
    fVar10 = (float)lib::L2CValue::as_number(aLStack216);
    fVar11 = (float)lib::L2CValue::as_number(aLStack232);
    bVar1 = lib::L2CValue::as_bool(aLStack248);
    app::lua_bind::MotionModule__change_motion_impl
              (*ppBVar9,HVar6,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack440);
    lib::L2CValue::L2CValue(aLStack440,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack216,ENERGY_STOP_RESET_TYPE_GROUND);
    lib::L2CValue::L2CValue(aLStack232,0.0);
    lib::L2CValue::L2CValue(aLStack248,0.0);
    lib::L2CValue::L2CValue(aLStack264,0.0);
    lib::L2CValue::L2CValue(aLStack280,0.0);
    lib::L2CValue::L2CValue(aLStack296,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack440);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack216);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack232);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack248);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack264);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack280);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack296);
    app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack296);
    lib::L2CValue::_L2CValue(aLStack280);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack440);
    lib::L2CValue::L2CValue(aLStack232,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack248,0x17d275fb97);
    uVar5 = lib::L2CValue::as_integer(aLStack232);
    uVar7 = lib::L2CValue::as_integer(aLStack248);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar7);
    lib::L2CValue::L2CValue(aLStack216,fVar10);
    fVar10 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack264,fVar10);
    lib::L2CValue::operator_(aLStack216,aLStack264);
    lib::L2CValue::operator_(aLStack184,aLStack440);
    lib::L2CValue::_L2CValue(aLStack440);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::L2CValue(aLStack216,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack232,0x171edffb09);
    uVar5 = lib::L2CValue::as_integer(aLStack216);
    uVar7 = lib::L2CValue::as_integer(aLStack232);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar7);
    lib::L2CValue::L2CValue(aLStack440,fVar10);
    lib::L2CValue::operator_(aLStack200,aLStack440);
  }
  lib::L2CValue::_L2CValue(aLStack440);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::L2CValue(aLStack312,SITUATION_KIND_AIR);
  lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xc8);
  lib::L2CValue::_L2CValue(aLStack312);
  lib::L2CValue::L2CValue(aLStack440,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue(aLStack216,ENERGY_STOP_RESET_TYPE_AIR);
  lib::L2CValue::L2CValue(aLStack232,0.0);
  lib::L2CValue::L2CValue(aLStack248,0.0);
  lib::L2CValue::L2CValue(aLStack264,0.0);
  lib::L2CValue::L2CValue(aLStack280,0.0);
  lib::L2CValue::L2CValue(aLStack296,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack440);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack216);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack232);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack248);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack264);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack280);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack296);
  app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack296);
  lib::L2CValue::_L2CValue(aLStack280);
  lib::L2CValue::_L2CValue(aLStack264);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack440);
  lib::L2CValue::L2CValue(aLStack440,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue(aLStack216,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack440);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack184);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack216);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack440);
  lib::L2CValue::L2CValue(aLStack216,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack232,0x1707c1b630);
  uVar5 = lib::L2CValue::as_integer(aLStack216);
  uVar7 = lib::L2CValue::as_integer(aLStack232);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar7);
  lib::L2CValue::L2CValue(aLStack440,fVar10);
  lib::L2CValue::operator_(aLStack168,aLStack440);
  lib::L2CValue::_L2CValue(aLStack440);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::L2CValue(aLStack440,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue(aLStack216,0.0);
  lib::L2CValue::L2CValue(aLStack232,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack440);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack216);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack232);
  app::sv_kinetic_energy::set_accel(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack440);
  lib::L2CValue::L2CValue(aLStack440,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue(aLStack216,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack440);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack168);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack216);
  app::sv_kinetic_energy::set_brake(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack440);
  lib::L2CValue::L2CValue(aLStack440,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  iVar2 = lib::L2CValue::as_integer(aLStack440);
  app::lua_bind::KineticModule__enable_energy_impl(*ppBVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack440);
  lib::L2CValue::L2CValue(aLStack440,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CValue::L2CValue(aLStack248,_FIGHTER_LITTLEMAC_INSTANCE_WORK_ID_FLOAT_AIR_ACCEL_Y);
  iVar2 = lib::L2CValue::as_integer(aLStack248);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar2);
  lib::L2CValue::L2CValue(aLStack232,fVar10);
  lib::L2CValue::operator_(aLStack232);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack440);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack216);
  app::sv_kinetic_energy::set_accel(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack440);
  lib::L2CValue::L2CValue(aLStack440,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  iVar2 = lib::L2CValue::as_integer(aLStack440);
  app::lua_bind::KineticModule__unable_energy_impl(*ppBVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack440);
  lib::L2CValue::L2CValue(aLStack248,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack264,0x1c9da21043);
  uVar5 = lib::L2CValue::as_integer(aLStack248);
  uVar7 = lib::L2CValue::as_integer(aLStack264);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar5,uVar7);
  lib::L2CValue::L2CValue(aLStack232,iVar2);
  lib::L2CValue::L2CValue(aLStack440,0.0);
  lib::L2CValue::operator_(aLStack232,aLStack440);
  lib::L2CValue::_L2CValue(aLStack440);
  lib::L2CValue::operator_(aLStack136,aLStack216);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack264);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::L2CValue(aLStack440,0.0);
  lib::L2CValue::operator_(aLStack136,aLStack440);
  lib::L2CValue::_L2CValue(aLStack440);
  lib::L2CValue::L2CValue(aLStack440,_FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
  fVar10 = (float)lib::L2CValue::as_number(aLStack216);
  iVar2 = lib::L2CValue::as_integer(aLStack440);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar2);
  lib::L2CValue::_L2CValue(aLStack440);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::L2CValue(aLStack216,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack232,0x2510b7fe1e);
  uVar5 = lib::L2CValue::as_integer(aLStack216);
  uVar7 = lib::L2CValue::as_integer(aLStack232);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar5,uVar7);
  lib::L2CValue::L2CValue(aLStack440,iVar2);
  lib::L2CValue::operator_(aLStack152,aLStack440);
  lib::L2CValue::_L2CValue(aLStack440);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::L2CValue
            (aLStack440,_FIGHTER_LITTLEMAC_INSTANCE_WORK_ID_INT_SPECIAL_S_DISABLE_LANDING_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack152);
  iVar3 = lib::L2CValue::as_integer(aLStack440);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack440);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack216,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack440,false);
  uVar5 = lib::L2CValue::operator__(aLStack216,aLStack440);
  lib::L2CValue::_L2CValue(aLStack440);
  lib::L2CValue::_L2CValue(aLStack216);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack344,false);
    FUN_710001baf0(aLStack328,this,aLStack344);
    lib::L2CValue::_L2CValue(aLStack328);
    lib::L2CValue::_L2CValue(aLStack344);
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue(aLStack440,&DAT_710001bbb0);
  lib::L2CValue::operator_(pLVar4,aLStack440);
  lib::L2CValue::_L2CValue(aLStack440);
  lib::L2CValue::L2CValue(aLStack440,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_S);
  iVar2 = lib::L2CValue::as_integer(aLStack440);
  app::lua_bind::WorkModule__unable_transition_term_impl(*ppBVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack440);
  lib::L2CValue::L2CValue(aLStack440,_FIGHTER_LITTLEMAC_INSTANCE_WORK_ID_FLAG_DISABLE_SPECIAL_S);
  iVar2 = lib::L2CValue::as_integer(aLStack440);
  app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack440);
  lib::L2CValue::L2CValue(aLStack360,0.0);
  lib::L2CValue::L2CValue(aLStack376,0.0);
  lib::L2CValue::L2CValue(aLStack392,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x98,(L2CValue)0x88,(L2CValue)0x78);
  lib::L2CValue::_L2CValue(aLStack392);
  lib::L2CValue::_L2CValue(aLStack376);
  lib::L2CValue::_L2CValue(aLStack360);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack216,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack216,0x1fbdb2615);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack216,0x162d277af);
  pfVar8 = (float *)app::lua_bind::PostureModule__pos_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack440,*pfVar8);
  lib::L2CValue::L2CValue(aLStack424,pfVar8[1]);
  lib::L2CValue::L2CValue(aLStack408,pfVar8[2]);
  lib::L2CValue::operator_(pLVar4,aLStack440);
  lib::L2CValue::operator_(this_00,aLStack424);
  lib::L2CValue::operator_(this_01,aLStack408);
  lib::L2CValue::_L2CValue(aLStack408);
  lib::L2CValue::_L2CValue(aLStack424);
  lib::L2CValue::_L2CValue(aLStack440);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack216,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack440,0.0);
  lib::L2CValue::operator_(pLVar4,aLStack440);
  lib::L2CValue::_L2CValue(aLStack440);
  lib::L2CValue::L2CValue(aLStack440,_FIGHTER_LITTLEMAC_INSTANCE_WORK_ID_FLOAT_SPECIAL_S_START_Y);
  fVar10 = (float)lib::L2CValue::as_number(aLStack232);
  iVar2 = lib::L2CValue::as_integer(aLStack440);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar2);
  lib::L2CValue::_L2CValue(aLStack440);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::L2CValue(aLStack440,0);
  lib::L2CValue::L2CValue(aLStack232,_FIGHTER_LITTLEMAC_INSTANCE_WORK_ID_INT_SPECIAL_S_FRAME_COUNT);
  iVar2 = lib::L2CValue::as_integer(aLStack440);
  iVar3 = lib::L2CValue::as_integer(aLStack232);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack440);
  lib::L2CValue::L2CValue
            (aLStack440,_FIGHTER_LITTLEMAC_INSTANCE_WORK_ID_FLAG_SPECIAL_S_IS_RAY_CHECK_RESULT);
  iVar2 = lib::L2CValue::as_integer(aLStack440);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack440);
  lib::L2CValue::L2CValue(aLStack456,&DAT_710001bc10);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x38);
  lib::L2CValue::_L2CValue(aLStack456);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack136);
  return;
}
