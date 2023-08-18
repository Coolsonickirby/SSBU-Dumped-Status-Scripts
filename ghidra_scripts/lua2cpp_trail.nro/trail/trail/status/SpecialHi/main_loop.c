
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTrail::status::SpecialHi_main_loop(L2CFighterTrail *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  GroundCorrectKind GVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  ulong uVar9;
  L2CValue *this_01;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  float fVar12;
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
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
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar3 & 1U) != 0) {
    iVar5 = 1;
    goto LAB_710001e0b8;
  }
  lib::L2CValue::L2CValue(aLStack128,0x1086bc4a93);
  cVar1 = (char)&stack0xfffffffffffffff0;
  lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting
            (this,(L2CValue)(cVar1 + -0x70));
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_TRAIL_STATUS_SPECIAL_HI_FLAG_COMMAND_ACCEPT);
  iVar5 = lib::L2CValue::as_integer(aLStack160);
  ppBVar10 = &this->moduleAccessor;
  bVar4 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar5);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar4 & 1));
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar7 = lib::L2CValue::operator__(aLStack144,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar7 & 1) == 0) {
LAB_710001cf34:
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_TRAIL_STATUS_SPECIAL_HI_FLAG_JUMP);
    iVar5 = lib::L2CValue::as_integer(aLStack160);
    bVar4 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar5);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar4 & 1));
    lib::L2CValue::L2CValue(aLStack112,true);
    uVar7 = lib::L2CValue::operator__(aLStack144,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack144);
      lVar2 = -0x90;
LAB_710001d03c:
      lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
    }
    else {
      lib::L2CValue::L2CValue(aLStack240,_FIGHTER_TRAIL_STATUS_SPECIAL_HI_FLAG_FALL);
      iVar5 = lib::L2CValue::as_integer(aLStack240);
      bVar4 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar5);
      lib::L2CValue::L2CValue(aLStack224,(bool)(bVar4 & 1));
      lib::L2CValue::L2CValue(aLStack112,false);
      uVar7 = lib::L2CValue::operator__(aLStack224,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TRAIL_STATUS_SPECIAL_HI_FLAG_FALL);
        iVar5 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar5);
        lVar2 = -0x60;
        goto LAB_710001d03c;
      }
    }
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_TRAIL_STATUS_SPECIAL_HI_FLAG_RESET_SPEED_MAX_X);
    iVar5 = lib::L2CValue::as_integer(aLStack160);
    bVar4 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar5);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar4 & 1));
    lib::L2CValue::L2CValue(aLStack112,true);
    uVar7 = lib::L2CValue::operator__(aLStack144,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TRAIL_STATUS_SPECIAL_HI_FLAG_RESET_SPEED_MAX_X);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar5);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack144,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack160,0x10ea0ebc2e);
      uVar7 = lib::L2CValue::as_integer(aLStack144);
      uVar9 = lib::L2CValue::as_integer(aLStack160);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar7,uVar9);
      lib::L2CValue::L2CValue(aLStack112,fVar11);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack160,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack224,0x10c4935e25);
      uVar7 = lib::L2CValue::as_integer(aLStack160);
      uVar9 = lib::L2CValue::as_integer(aLStack224);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar7,uVar9);
      lib::L2CValue::L2CValue(aLStack144,fVar11);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      app::sv_kinetic_energy::controller_set_accel_x_mul(this->luaStateAgent);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
      app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
      app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_TRAIL_STATUS_SPECIAL_HI_FLAG_JUMP_START);
    iVar5 = lib::L2CValue::as_integer(aLStack160);
    bVar4 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar5);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar4 & 1));
    lib::L2CValue::L2CValue(aLStack112,true);
    uVar7 = lib::L2CValue::operator__(aLStack144,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TRAIL_STATUS_SPECIAL_HI_FLAG_JUMP_START);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar5);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TRAIL_STATUS_SPECIAL_HI_FLAG_JUMP);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar5);
      lib::L2CValue::_L2CValue(aLStack112);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
      bVar4 = lib::L2CValue::operator__(pLVar8,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack144,(bool)(bVar4 & 1));
      lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
      GVar6 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar6);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_AIR_STOP);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar5);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      app::sv_kinetic_energy::unable(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar10,iVar5);
      lib::L2CValue::L2CValue(aLStack160,fVar11);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack240,0x10649839db);
      uVar7 = lib::L2CValue::as_integer(aLStack112);
      uVar9 = lib::L2CValue::as_integer(aLStack240);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar7,uVar9);
      lib::L2CValue::L2CValue(aLStack224,fVar11);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack256,0x104a761b91);
      uVar7 = lib::L2CValue::as_integer(aLStack112);
      uVar9 = lib::L2CValue::as_integer(aLStack256);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar7,uVar9);
      lib::L2CValue::L2CValue(aLStack240,fVar11);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0x1220fc2660);
      lib::L2CValue::L2CValue(aLStack272,0);
      uVar7 = lib::L2CValue::as_integer(aLStack112);
      uVar9 = lib::L2CValue::as_integer(aLStack272);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar7,uVar9);
      lib::L2CValue::L2CValue(aLStack256,fVar11);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::operator_(aLStack256,aLStack240);
      lib::L2CValue::operator_(aLStack256,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CValue::L2CValue(aLStack272,ENERGY_CONTROLLER_RESET_TYPE_FALL_ADJUST);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lib::L2CValue::L2CValue(aLStack352,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack352);
      app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
      app::sv_kinetic_energy::set_brake(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
      app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
      app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      app::sv_kinetic_energy::controller_set_accel_x_mul(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
      app::sv_kinetic_energy::controller_set_accel_x_add(this->luaStateAgent);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      app::sv_kinetic_energy::enable(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack288,0xd3e6399f6);
      uVar7 = lib::L2CValue::as_integer(aLStack112);
      uVar9 = lib::L2CValue::as_integer(aLStack288);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar7,uVar9);
      lib::L2CValue::L2CValue(aLStack272,fVar11);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,true);
      uVar7 = lib::L2CValue::operator__(aLStack144,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack304,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack320,0x113a17d790);
        uVar7 = lib::L2CValue::as_integer(aLStack304);
        uVar9 = lib::L2CValue::as_integer(aLStack320);
        fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar7,uVar9);
        lib::L2CValue::L2CValue(aLStack288,fVar11);
        lib::L2CValue::operator_(aLStack272,aLStack288);
        lib::L2CValue::operator_(aLStack272,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack304);
      }
      lib::L2CValue::L2CValue(aLStack288,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack304,0xc4a859b86);
      uVar7 = lib::L2CValue::as_integer(aLStack288);
      uVar9 = lib::L2CValue::as_integer(aLStack304);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar7,uVar9);
      lib::L2CValue::L2CValue(aLStack112,fVar11);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      fVar11 = (float)lib::L2CValue::as_number(aLStack272);
      fVar12 = (float)lib::L2CValue::as_number(aLStack112);
      fVar11 = (float)app::KineticUtility::get_jump_speed_y(fVar11,fVar12);
      lib::L2CValue::L2CValue(aLStack288,fVar11);
      lib::L2CValue::L2CValue(aLStack304,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack320,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lib::L2CValue::L2CValue(aLStack352,0.0);
      lib::L2CValue::L2CValue(aLStack368,0.0);
      lib::L2CValue::L2CValue(aLStack384,0.0);
      lib::L2CValue::L2CValue(aLStack400,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack352);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack368);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack384);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack400);
      app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::L2CValue(aLStack304,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::L2CValue(aLStack304,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
      app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::L2CValue(aLStack304,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::operator_(aLStack112);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
      app::sv_kinetic_energy::set_accel(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
    }
    this_01 = &this->globalTable;
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar8,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) != 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0x17);
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar8,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_TRAIL_STATUS_SPECIAL_HI_FLAG_JUMP);
        iVar5 = lib::L2CValue::as_integer(aLStack160);
        bVar4 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar5);
        lib::L2CValue::L2CValue(aLStack144,(bool)(bVar4 & 1));
        lib::L2CValue::L2CValue(aLStack112,false);
        uVar7 = lib::L2CValue::operator__(aLStack144,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((uVar7 & 1) != 0) {
          this_00 = &this->globalTable;
          pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
          uVar7 = lib::L2CValue::operator__(pLVar8,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar7 & 1) == 0) {
LAB_710001dda4:
            pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
            lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
            uVar7 = lib::L2CValue::operator__(pLVar8,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar7 & 1) != 0) {
              pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
              lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
              uVar7 = lib::L2CValue::operator__(pLVar8,aLStack112);
              lib::L2CValue::_L2CValue(aLStack112);
              if ((uVar7 & 1) != 0) {
                lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
                GVar6 = lib::L2CValue::as_integer(aLStack112);
                app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar6);
                lib::L2CValue::_L2CValue(aLStack112);
                lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_AIR_STOP);
                iVar5 = lib::L2CValue::as_integer(aLStack112);
                app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar5);
                goto LAB_710001de5c;
              }
            }
          }
          else {
            pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
            lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
            uVar7 = lib::L2CValue::operator__(pLVar8,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar7 & 1) == 0) goto LAB_710001dda4;
            lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
            GVar6 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar6);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
            iVar5 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar5);
LAB_710001de5c:
            lib::L2CValue::_L2CValue(aLStack112);
          }
          pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0x16);
          lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
          uVar7 = lib::L2CValue::operator__(pLVar8,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar7 & 1) != 0) {
            pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0x17);
            lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
            lib::L2CValue::operator__(pLVar8,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
          }
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_TRAIL_STATUS_SPECIAL_HI_FLAG_FALL);
    iVar5 = lib::L2CValue::as_integer(aLStack160);
    bVar4 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar5);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar4 & 1));
    lib::L2CValue::L2CValue(aLStack112,true);
    uVar7 = lib::L2CValue::operator__(aLStack144,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar7 & 1) != 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0x16);
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar8,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack416,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
        lib::L2CValue::L2CValue(aLStack432,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x60,(L2CValue)0x50);
        lib::L2CValue::_L2CValue(aLStack432);
        pLVar8 = aLStack416;
        goto LAB_710001e0ac;
      }
    }
    bVar4 = app::lua_bind::MotionModule__is_end_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar4 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar3 & 1U) != 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0x16);
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar8,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) == 0) {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0x16);
        lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
        uVar7 = lib::L2CValue::operator__(pLVar8,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar7 & 1) == 0) goto LAB_710001e0b0;
        lib::L2CValue::L2CValue(aLStack480,FIGHTER_STATUS_KIND_FALL_SPECIAL);
        lib::L2CValue::L2CValue(aLStack496,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x20,(L2CValue)0x10);
        lib::L2CValue::_L2CValue(aLStack496);
        pLVar8 = aLStack480;
      }
      else {
        lib::L2CValue::L2CValue(aLStack448,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
        lib::L2CValue::L2CValue(aLStack464,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0x30);
        lib::L2CValue::_L2CValue(aLStack464);
        pLVar8 = aLStack448;
      }
      goto LAB_710001e0ac;
    }
  }
  else {
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x20);
    lib::L2CValue::L2CValue(aLStack112,FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_S);
    lib::L2CValue::operator_(pLVar8,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((bVar3 & 1U) == 0) goto LAB_710001cf34;
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_S);
    iVar5 = lib::L2CValue::as_integer(aLStack144);
    bVar4 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar10,iVar5);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar4 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((bVar3 & 1U) == 0) goto LAB_710001cf34;
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x39);
    lib::L2CValue::L2CValue(aLStack176,pLVar8);
    lua2cpp::L2CFighterCommon::sub_transition_term_id_cont_disguise(this,(L2CValue)(cVar1 + '`'));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((bVar3 & 1U) == 0) goto LAB_710001cf34;
    lib::L2CValue::L2CValue(aLStack192,FIGHTER_STATUS_KIND_SPECIAL_S);
    lib::L2CValue::L2CValue(aLStack208,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + 'P'),(L2CValue)(cVar1 + '@'));
    lib::L2CValue::_L2CValue(aLStack208);
    pLVar8 = aLStack192;
LAB_710001e0ac:
    lib::L2CValue::_L2CValue(pLVar8);
  }
LAB_710001e0b0:
  iVar5 = 0;
LAB_710001e0b8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar5);
  return;
}

