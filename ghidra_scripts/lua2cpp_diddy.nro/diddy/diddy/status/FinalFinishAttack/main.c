
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDiddy::status::FinalFinishAttack_main(L2CFighterDiddy *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  FighterModuleAccessor *pFVar4;
  ulong uVar5;
  Hash40 HVar6;
  BattleObjectModuleAccessor **ppBVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  long lVar11;
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  undefined auStack160 [32];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  BattleObjectModuleAccessor *local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_DIDDY_STATUS_FINAL_FLAG_GENERATE_EXPLODE_FLY_WAIT);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  FUN_7100019710(this);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  pFVar4 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
  bVar1 = app::FighterSpecializer_Diddy::final_finish_attack_dir(pFVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
  uVar5 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)auStack160,0x77a08c3fc);
    HVar6 = lib::L2CValue::as_hash((L2CValue *)auStack160);
    fVar8 = (float)app::sv_math::randf(HVar6,1.0);
    lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),fVar8);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0x167);
    lib::L2CValue::operator_((L2CValue *)(auStack160 + 0x10),(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)auStack160);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_DIDDY_STATUS_FINAL_WORK_FLOAT_ANGLE_X);
    fVar8 = (float)lib::L2CValue::as_number((L2CValue *)(auStack160 + 0x10));
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_DIDDY_STATUS_FINAL_WORK_FLOAT_ANGLE_X);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack128,fVar8);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  uVar5 = lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,360.0);
    uVar5 = lib::L2CValue::operator_((L2CValue *)&local_60,aLStack128);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,360.0);
      lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::operator_(aLStack128,(L2CValue *)(auStack160 + 0x10));
      goto LAB_7100017a7c;
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,360.0);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)(auStack160 + 0x10));
LAB_7100017a7c:
    lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,45.0);
  uVar5 = lib::L2CValue::operator_((L2CValue *)&local_60,aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,135.0);
    uVar5 = lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0xf6a4af395);
      lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),0.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack160,1.0);
      lib::L2CValue::L2CValue(aLStack176,true);
      HVar6 = lib::L2CValue::as_hash((L2CValue *)&local_60);
      fVar8 = (float)lib::L2CValue::as_number((L2CValue *)(auStack160 + 0x10));
      fVar9 = (float)lib::L2CValue::as_number((L2CValue *)auStack160);
      bVar1 = lib::L2CValue::as_bool(aLStack176);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue((L2CValue *)auStack160);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_DIDDY_GENERATE_ARTICLE_BARRELJETS);
      lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),0xf6a4af395);
      lib::L2CValue::L2CValue((L2CValue *)auStack160,false);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      HVar6 = lib::L2CValue::as_hash((L2CValue *)(auStack160 + 0x10));
      bVar1 = lib::L2CValue::as_bool((L2CValue *)auStack160);
      app::lua_bind::ArticleModule__change_motion_impl
                (this->moduleAccessor,iVar2,HVar6,(bool)(bVar1 & 1),-1.0);
      goto LAB_7100017e84;
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,225.0);
  uVar5 = lib::L2CValue::operator_((L2CValue *)&local_60,aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,315.0);
    uVar5 = lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0xff4290bf2);
      lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),0.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack160,1.0);
      lib::L2CValue::L2CValue(aLStack176,true);
      HVar6 = lib::L2CValue::as_hash((L2CValue *)&local_60);
      fVar8 = (float)lib::L2CValue::as_number((L2CValue *)(auStack160 + 0x10));
      fVar9 = (float)lib::L2CValue::as_number((L2CValue *)auStack160);
      bVar1 = lib::L2CValue::as_bool(aLStack176);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue((L2CValue *)auStack160);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_DIDDY_GENERATE_ARTICLE_BARRELJETS);
      lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),0xff4290bf2);
      lib::L2CValue::L2CValue((L2CValue *)auStack160,false);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      HVar6 = lib::L2CValue::as_hash((L2CValue *)(auStack160 + 0x10));
      bVar1 = lib::L2CValue::as_bool((L2CValue *)auStack160);
      app::lua_bind::ArticleModule__change_motion_impl
                (this->moduleAccessor,iVar2,HVar6,(bool)(bVar1 & 1),-1.0);
      goto LAB_7100017e84;
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xe7fdcdeb2);
  lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),0.0);
  lib::L2CValue::L2CValue((L2CValue *)auStack160,1.0);
  lib::L2CValue::L2CValue(aLStack176,true);
  HVar6 = lib::L2CValue::as_hash((L2CValue *)&local_60);
  fVar8 = (float)lib::L2CValue::as_number((L2CValue *)(auStack160 + 0x10));
  fVar9 = (float)lib::L2CValue::as_number((L2CValue *)auStack160);
  bVar1 = lib::L2CValue::as_bool(aLStack176);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)auStack160);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_DIDDY_GENERATE_ARTICLE_BARRELJETS);
  lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),0xe7fdcdeb2);
  lib::L2CValue::L2CValue((L2CValue *)auStack160,false);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  HVar6 = lib::L2CValue::as_hash((L2CValue *)(auStack160 + 0x10));
  bVar1 = lib::L2CValue::as_bool((L2CValue *)auStack160);
  app::lua_bind::ArticleModule__change_motion_impl
            (this->moduleAccessor,iVar2,HVar6,(bool)(bVar1 & 1),-1.0);
LAB_7100017e84:
  lib::L2CValue::_L2CValue((L2CValue *)auStack160);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xb54dafbfb);
  lib::L2CValue::L2CValue((L2CValue *)auStack160,0x13c98bda2f);
  pLVar3 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack160);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (this->moduleAccessor,(ulong)pLVar3,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),fVar8);
  lib::L2CValue::_L2CValue((L2CValue *)auStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CAgent::math_rad((L2CAgent *)aLStack128,pLVar3);
  lib::L2CAgent::math_cos((L2CAgent *)auStack160,pLVar3);
  ppBVar7 = &local_60;
  lib::L2CValue::operator_((L2CValue *)(auStack160 + 0x10),(L2CValue *)ppBVar7);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CAgent::math_sin((L2CAgent *)auStack160,(L2CValue *)ppBVar7);
  lib::L2CValue::operator_((L2CValue *)(auStack160 + 0x10),(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue(aLStack208,_ENERGY_STOP_RESET_TYPE_FREE);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
  app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
  app::sv_kinetic_energy::set_accel(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue(aLStack208,-1.0);
  lib::L2CValue::L2CValue(aLStack224,-1.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
  app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
  app::sv_kinetic_energy::set_brake(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue(aLStack208,-1.0);
  lib::L2CValue::L2CValue(aLStack224,-1.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
  app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  app::sv_kinetic_energy::enable(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack208,0x31d39a761);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x5a);
  lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack272,fVar8);
  lib::L2CValue::operator_(aLStack256,aLStack272);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,-1);
  lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  lib::L2CValue::L2CValue(aLStack304,0.0);
  HVar6 = lib::L2CValue::as_hash(aLStack208);
  uVar5 = lib::L2CValue::as_number(aLStack224);
  lVar11 = lib::L2CValue::as_number(aLStack288);
  uVar10 = lib::L2CValue::as_number(aLStack304);
  local_60 = (BattleObjectModuleAccessor *)(uVar5 & 0xffffffff | lVar11 << 0x20);
  uStack88 = (ulong)uVar10;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar6,(Vector3f *)&local_60,0,0);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,FinalFinishAttack_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)auStack160);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

