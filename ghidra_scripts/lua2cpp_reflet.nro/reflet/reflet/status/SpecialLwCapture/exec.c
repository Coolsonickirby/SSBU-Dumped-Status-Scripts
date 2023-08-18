
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterReflet::status::SpecialLwCapture_exec(L2CFighterReflet *this,L2CValue *return_value)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  FighterModuleAccessor *pFVar9;
  Hash40 HVar10;
  float fVar11;
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
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
  bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
  lib::L2CValue::operator_(aLStack160,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar6 = lib::L2CValue::operator__(aLStack160,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) goto LAB_71000040e8;
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_REFLET_STATUS_SPECIAL_LW_CAPTURE_FLOAT_GAP_Y);
  iVar4 = lib::L2CValue::as_integer(aLStack240);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack224,fVar11);
  lib::L2CValue::L2CValue(aLStack80,-0.2);
  lib::L2CValue::operator_(aLStack224,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::operator_(aLStack128,aLStack208);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue
            (aLStack224,_FIGHTER_REFLET_STATUS_SPECIAL_LW_CAPTURE_FLAG_IS_TARGET_GROUND);
  iVar4 = lib::L2CValue::as_integer(aLStack224);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack208,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack208);
  iVar4 = SITUATION_KIND_AIR;
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
LAB_710000390c:
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack224);
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,iVar4);
    uVar6 = lib::L2CValue::operator__(aLStack80,pLVar7);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    if ((uVar6 & 1) == 0) goto LAB_710000390c;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  }
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue
            (aLStack208,_FIGHTER_REFLET_STATUS_SPECIAL_LW_CAPTURE_WORK_INT_CATCH_STATUS);
  iVar4 = lib::L2CValue::as_integer(aLStack208);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack80,iVar4);
  lib::L2CValue::operator_(aLStack144,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_STATUS_SPECIAL_LW_CATCH_STATUS_CATCH_START);
  uVar6 = lib::L2CValue::operator__(aLStack144,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_STATUS_SPECIAL_LW_CATCH_STATUS_CATCH);
    uVar6 = lib::L2CValue::operator__(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack208,_FIGHTER_REFLET_STATUS_SPECIAL_LW_CAPTURE_INT_DISABLE_GRAVITY_FRAME);
      iVar4 = lib::L2CValue::as_integer(aLStack208);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack80,iVar4);
      lib::L2CValue::operator_(aLStack192,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lVar1 = -0xc0;
      goto LAB_7100003be0;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack208,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack224,0x2855067d54);
    uVar6 = lib::L2CValue::as_integer(aLStack208);
    uVar8 = lib::L2CValue::as_integer(aLStack224);
    iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack80,iVar4);
    lib::L2CValue::L2CValue
              (aLStack240,_FIGHTER_REFLET_STATUS_SPECIAL_LW_CAPTURE_INT_DISABLE_GRAVITY_FRAME);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    iVar5 = lib::L2CValue::as_integer(aLStack240);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_STATUS_SPECIAL_LW_CATCH_STATUS_CATCH);
    lib::L2CValue::L2CValue
              (aLStack208,_FIGHTER_REFLET_STATUS_SPECIAL_LW_CAPTURE_WORK_INT_CATCH_STATUS);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    iVar5 = lib::L2CValue::as_integer(aLStack208);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
    lib::L2CValue::_L2CValue(aLStack208);
    lVar1 = -0x40;
LAB_7100003be0:
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  pFVar9 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
  app::FighterSpecializer_Reflet::special_lw_heal_damage(pFVar9);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_REFLET_STATUS_SPECIAL_LW_CAPTURE_FLOAT_HEAL_DAMAGE);
  iVar4 = lib::L2CValue::as_integer(aLStack208);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack80,fVar11);
  lib::L2CValue::operator_(aLStack176,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  uVar6 = lib::L2CValue::operator_(aLStack80,aLStack176);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0x148e71ec03);
    lib::L2CValue::L2CValue(aLStack240,_FIGHTER_REFLET_STATUS_SPECIAL_LW_CAPTURE_FLAG_HEAL_EFFECT);
    iVar4 = lib::L2CValue::as_integer(aLStack240);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack224,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack256,0x15fbd4c54c);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_STATUS_SPECIAL_LW_CAPTURE_FLAG_HEAL_EFFECT);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_REFLET_STATUS_SPECIAL_LW_CAPTURE_INT_FRAME);
  iVar4 = lib::L2CValue::as_integer(aLStack224);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack80,iVar4);
  lib::L2CValue::operator_(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_INSTANCE_WORK_ID_INT_CUSTOMIZE_SPECIAL_LW_NO);
  iVar4 = lib::L2CValue::as_integer(aLStack240);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack224,iVar4);
  lib::L2CValue::L2CValue(aLStack80,2);
  uVar6 = lib::L2CValue::operator__(aLStack80,aLStack224);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar6 = lib::L2CValue::operator_(aLStack80,aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) goto LAB_71000040ac;
    lib::L2CValue::L2CValue(aLStack80,0x1f);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::operator_(aLStack272);
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack256);
    if ((bVar3 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack272);
      goto LAB_71000040ac;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_STATUS_SPECIAL_LW_CATCH_STATUS_CATCH);
    uVar6 = lib::L2CValue::operator__(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack240);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack224,_MA_MSC_EFFECT_REQUEST_FOLLOW);
      lib::L2CValue::L2CValue(aLStack240,0xc8b9a0581);
      lib::L2CValue::L2CValue(aLStack256,0x31ed91fca);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lib::L2CValue::L2CValue(aLStack352,0.0);
      lib::L2CValue::L2CValue(aLStack368,1.0);
      lib::L2CValue::L2CValue(aLStack384,true);
      lib::L2CValue::L2CValue(aLStack400,_EFFECT_SUB_ATTRIBUTE_CONCLUDE_STATUS);
      lib::L2CValue::L2CValue(aLStack416,0);
      lib::L2CValue::L2CValue(aLStack432,-1);
      FUN_7100006a50(aLStack80,this,aLStack224,aLStack240,aLStack256,aLStack272,aLStack288,
                     aLStack304,aLStack320,aLStack336,aLStack352,aLStack368,aLStack384,aLStack400,
                     aLStack416,aLStack432);
      lib::L2CValue::operator_(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack432);
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::L2CValue(aLStack224,0x15fbd4c54c);
      HVar10 = lib::L2CValue::as_hash(aLStack224);
      iVar4 = app::lua_bind::SoundModule__play_se_impl
                        (this->moduleAccessor,HVar10,true,false,false,false,0);
      lib::L2CValue::L2CValue(aLStack80,iVar4);
      lib::L2CValue::_L2CValue(aLStack80);
      lVar1 = -0xd0;
      goto LAB_71000040b8;
    }
  }
  else {
LAB_71000040ac:
    lib::L2CValue::_L2CValue(aLStack224);
    lVar1 = -0xe0;
LAB_71000040b8:
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  }
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_REFLET_STATUS_SPECIAL_LW_CAPTURE_INT_FRAME);
  iVar4 = lib::L2CValue::as_integer(aLStack224);
  app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue(aLStack224);
LAB_71000040e8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

