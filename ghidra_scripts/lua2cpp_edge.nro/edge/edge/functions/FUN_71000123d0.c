
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000123d0(L2CFighterCommon *param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  ulong uVar7;
  BattleObjectModuleAccessor **ppBVar8;
  float fVar9;
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
  
  lib::L2CValue::L2CValue(aLStack96,0x1018dfb2f4);
  lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting
            (param_1,(L2CValue)((char)&stack0xfffffffffffffff0 + -0x50));
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,false);
  FUN_7100013d60(param_1,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_EDGE_STATUS_SPECIAL_LW_FLAG_ENABLE_CONTROL_X);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  ppBVar8 = &param_1->moduleAccessor;
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar4);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((bVar3 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack128,false);
    lib::L2CValue::L2CValue
              (aLStack176,_FIGHTER_EDGE_STATUS_SPECIAL_LW_FLAG_ENABLE_CONTROL_X_END_INIT);
    iVar4 = lib::L2CValue::as_integer(aLStack176);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar4);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
    lib::L2CValue::operator!(aLStack160);
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack144);
    if ((bVar3 & 1U) == 0) {
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack176);
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator==(pLVar5,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack176);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,true);
        lib::L2CValue::operator=(aLStack128,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
      }
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator==(pLVar5,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1->globalTable,0x17);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator==(pLVar5,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,true);
        lib::L2CValue::operator=(aLStack128,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
      }
    }
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack128);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      fVar9 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar8,iVar4);
      lib::L2CValue::L2CValue(aLStack144,fVar9);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack176,0x23ffda17b9);
      uVar6 = lib::L2CValue::as_integer(aLStack80);
      uVar7 = lib::L2CValue::as_integer(aLStack176);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack160,fVar9);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack192,0x2736477407);
      uVar6 = lib::L2CValue::as_integer(aLStack80);
      uVar7 = lib::L2CValue::as_integer(aLStack192);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack176,fVar9);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack208,0x1130d6fe7d);
      uVar6 = lib::L2CValue::as_integer(aLStack80);
      uVar7 = lib::L2CValue::as_integer(aLStack208);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack192,fVar9);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)param_1);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack80);
      app::sv_kinetic_energy::unable(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x1220fc2660);
      lib::L2CValue::L2CValue(aLStack224,0);
      uVar6 = lib::L2CValue::as_integer(aLStack80);
      uVar7 = lib::L2CValue::as_integer(aLStack224);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack208,fVar9);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      uVar6 = lib::L2CValue::operator==(aLStack176,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::operator*(aLStack176,aLStack208);
        lib::L2CValue::operator=(aLStack208,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
      }
      lib::L2CValue::L2CValue(aLStack80,0xf71f4d4f8);
      lib::L2CValue::L2CValue(aLStack240,0);
      uVar6 = lib::L2CValue::as_integer(aLStack80);
      uVar7 = lib::L2CValue::as_integer(aLStack240);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack224,fVar9);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0xf25ec86be);
      lib::L2CValue::L2CValue(aLStack256,0);
      uVar6 = lib::L2CValue::as_integer(aLStack80);
      uVar7 = lib::L2CValue::as_integer(aLStack256);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack240,fVar9);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      uVar6 = lib::L2CValue::operator==(aLStack160,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::operator*(aLStack160,aLStack224);
        lib::L2CValue::operator=(aLStack224,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::operator*(aLStack160,aLStack240);
        lib::L2CValue::operator=(aLStack240,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
      }
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CValue::L2CValue(aLStack256,ENERGY_CONTROLLER_RESET_TYPE_FALL_ADJUST);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)param_1);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack80);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack256);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack272);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack288);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack304);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack320);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack336);
      app::sv_kinetic_energy::reset_energy(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)param_1);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack80);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack144);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack256);
      app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      uVar6 = lib::L2CValue::operator==(aLStack192,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
        lib::L2CValue::L2CValue(aLStack256,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)param_1);
        lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack80);
        lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack192);
        lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack256);
        app::sv_kinetic_energy::set_brake(param_1->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack256);
        lib::L2CValue::~L2CValue(aLStack80);
      }
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)param_1);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack80);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack208);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack256);
      app::sv_kinetic_energy::set_stable_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)param_1);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack80);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack208);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack256);
      app::sv_kinetic_energy::set_limit_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)param_1);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack224);
      app::sv_kinetic_energy::controller_set_accel_x_mul(param_1->luaStateAgent);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)param_1);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack240);
      app::sv_kinetic_energy::controller_set_accel_x_add(param_1->luaStateAgent);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)param_1);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack80);
      app::sv_kinetic_energy::enable(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
    }
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_EDGE_STATUS_SPECIAL_LW_FLAG_ENABLE_CONTROL_X_END_INIT);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar8,iVar4);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_EDGE_STATUS_SPECIAL_LW_FLAG_ENABLE_FALL_SPEED);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar4);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_EDGE_STATUS_SPECIAL_LW_FLAG_SHIELD_BREAK);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar4);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar6 = lib::L2CValue::operator==(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      goto LAB_7100013658;
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator==(pLVar5,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_EDGE_STATUS_SPECIAL_LW_FLAG_IS_HIT_SHIELD);
      iVar4 = lib::L2CValue::as_integer(aLStack176);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar4);
      lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack160);
      if ((bVar3 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack208,_FIGHTER_EDGE_STATUS_SPECIAL_LW_FLAG_IS_HIT_STOP_SPEED_CHANGE);
        iVar4 = lib::L2CValue::as_integer(aLStack208);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar4);
        lib::L2CValue::L2CValue(aLStack192,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue(aLStack80,false);
        uVar6 = lib::L2CValue::operator==(aLStack192,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack144);
        if ((uVar6 & 1) == 0) goto LAB_7100013658;
        lib::L2CValue::L2CValue(aLStack80,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        fVar9 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar8,iVar4);
        lib::L2CValue::L2CValue(aLStack128,fVar9);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x12ec5626fe);
        lib::L2CValue::L2CValue(aLStack160,0);
        uVar6 = lib::L2CValue::as_integer(aLStack80);
        uVar7 = lib::L2CValue::as_integer(aLStack160);
        fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack144,fVar9);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack176,0xba18057d9);
        lib::L2CValue::L2CValue(aLStack192,0);
        uVar6 = lib::L2CValue::as_integer(aLStack176);
        uVar7 = lib::L2CValue::as_integer(aLStack192);
        fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack80,fVar9);
        lib::L2CValue::operator-(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::L2CValue(aLStack80,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack192,0x1900b3b5b6);
        uVar6 = lib::L2CValue::as_integer(aLStack80);
        uVar7 = lib::L2CValue::as_integer(aLStack192);
        fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack176,fVar9);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack208,0x154540af28);
        uVar6 = lib::L2CValue::as_integer(aLStack80);
        uVar7 = lib::L2CValue::as_integer(aLStack208);
        fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack192,fVar9);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0.0);
        uVar6 = lib::L2CValue::operator==(aLStack176,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::operator*(aLStack176,aLStack144);
          lib::L2CValue::operator=(aLStack144,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
        }
        lib::L2CValue::L2CValue(aLStack80,0.0);
        uVar6 = lib::L2CValue::operator==(aLStack192,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::operator*(aLStack192,aLStack160);
          lib::L2CValue::operator=(aLStack160,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
        }
        lib::L2CValue::L2CValue(aLStack208,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack224,0x16180a6a48);
        uVar6 = lib::L2CValue::as_integer(aLStack208);
        uVar7 = lib::L2CValue::as_integer(aLStack224);
        fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack80,fVar9);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::L2CValue(aLStack208,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CValue::operator*(aLStack144,aLStack80);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)param_1);
        lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack208);
        lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack224);
        app::sv_kinetic_energy::set_limit_speed(param_1->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::L2CValue(aLStack208,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CValue::operator*(aLStack144,aLStack80);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)param_1);
        lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack208);
        lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack224);
        app::sv_kinetic_energy::set_stable_speed(param_1->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::L2CValue(aLStack208,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CValue::operator*(aLStack160,aLStack80);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)param_1);
        lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack208);
        lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack224);
        app::sv_kinetic_energy::set_accel(param_1->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::L2CValue(aLStack208,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CValue::operator*(aLStack128,aLStack80);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)param_1);
        lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack208);
        lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack224);
        app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::L2CValue
                  (aLStack208,_FIGHTER_EDGE_STATUS_SPECIAL_LW_FLAG_IS_HIT_STOP_SPEED_CHANGE);
        iVar4 = lib::L2CValue::as_integer(aLStack208);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar4);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack160);
        lVar1 = -0x80;
        goto LAB_710001362c;
      }
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack176);
    }
    lib::L2CValue::~L2CValue(aLStack128);
    lVar1 = -0x80;
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,false);
    lib::L2CValue::L2CValue
              (aLStack176,_FIGHTER_EDGE_STATUS_SPECIAL_LW_FLAG_ENABLE_FALL_SPEED_END_INIT);
    iVar4 = lib::L2CValue::as_integer(aLStack176);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar4);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
    lib::L2CValue::operator!(aLStack160);
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack144);
    if ((bVar3 & 1U) == 0) {
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack176);
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator==(pLVar5,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack176);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,true);
        lib::L2CValue::operator=(aLStack128,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
      }
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator==(pLVar5,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1->globalTable,0x17);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator==(pLVar5,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,true);
        lib::L2CValue::operator=(aLStack128,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
      }
    }
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack128);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack160,0xba18057d9);
      lib::L2CValue::L2CValue(aLStack176,0);
      uVar6 = lib::L2CValue::as_integer(aLStack160);
      uVar7 = lib::L2CValue::as_integer(aLStack176);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack144,fVar9);
      lib::L2CValue::operator-(aLStack144);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,0x12ec5626fe);
      lib::L2CValue::L2CValue(aLStack176,0);
      uVar6 = lib::L2CValue::as_integer(aLStack160);
      uVar7 = lib::L2CValue::as_integer(aLStack176);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack144,fVar9);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)param_1);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack80);
      app::sv_kinetic_energy::set_accel(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)param_1);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack144);
      app::sv_kinetic_energy::set_limit_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)param_1);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack144);
      app::sv_kinetic_energy::set_stable_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_EDGE_STATUS_SPECIAL_LW_FLAG_ENABLE_FALL_SPEED_END_INIT);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar8,iVar4);
    lVar1 = -0x40;
LAB_710001362c:
    lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
    lVar1 = -0x70;
  }
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
LAB_7100013658:
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar6 = lib::L2CValue::operator==(pLVar5,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    fVar9 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar8,iVar4);
    lib::L2CValue::L2CValue(aLStack80,fVar9);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack160,0x18ecc76f9d);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    uVar7 = lib::L2CValue::as_integer(aLStack160);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack128,fVar9);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    uVar6 = lib::L2CValue::operator<(aLStack128,aLStack80);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::operator=(aLStack80,aLStack128);
    }
    lib::L2CValue::L2CValue(aLStack144,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)param_1);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack144);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack80);
    app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  return;
}

