
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001fab0(L2CAgent *param_1,L2CValue *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  L2CValue *pLVar7;
  float *pfVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  uint uVar11;
  long lVar12;
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  undefined local_190 [32];
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
  undefined8 auStack192 [2];
  undefined auStack176 [32];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  FUN_7100020d50(aLStack96,param_1);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_TYPE_AIR_STOP);
  lib::L2CValue::L2CValue(aLStack144,false);
  FUN_7100022b40(param_1,aLStack112,aLStack128,aLStack144);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)auStack192,0xdfe4ec7a8);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack176);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack192);
  ppBVar9 = &param_1->moduleAccessor;
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)local_190,fVar10);
  FUN_71000232a0(aLStack208,param_1);
  lib::L2CValue::operator*((L2CValue *)local_190,aLStack208);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue((L2CValue *)local_190);
  lib::L2CValue::~L2CValue((L2CValue *)auStack192);
  lib::L2CValue::~L2CValue((L2CValue *)auStack176);
  lib::L2CValue::L2CValue((L2CValue *)local_190,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,0.0);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)local_190);
  lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)(auStack176 + 0x10));
  lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack176);
  app::sv_kinetic_energy::set_brake(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue((L2CValue *)auStack176);
  lib::L2CValue::~L2CValue((L2CValue *)local_190);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,_FIGHTER_INKLING_STATUS_SPECIAL_S_FLAG_TURN);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack176);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)local_190,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)local_190);
  lib::L2CValue::~L2CValue((L2CValue *)local_190);
  lib::L2CValue::~L2CValue((L2CValue *)auStack176);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_190,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CAgent::clear_lua_stack(param_1);
    pLVar7 = (L2CValue *)local_190;
    lib::L2CAgent::push_lua_stack(param_1,pLVar7);
    fVar10 = (float)app::sv_kinetic_energy::get_speed_x(param_1->luaStateAgent);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,fVar10);
    lib::L2CValue::~L2CValue((L2CValue *)local_190);
    lib::L2CAgent::math_abs((L2CAgent *)auStack176,pLVar7);
    lib::L2CValue::L2CValue((L2CValue *)local_190,0.0);
    uVar4 = lib::L2CValue::operator<((L2CValue *)local_190,(L2CValue *)auStack192);
    lib::L2CValue::~L2CValue((L2CValue *)local_190);
    lib::L2CValue::~L2CValue((L2CValue *)auStack192);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_190,_FIGHTER_INKLING_STATUS_SPECIAL_S_FLAG_TURN);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_190);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)local_190);
      app::lua_bind::PostureModule__reverse_lr_impl(*ppBVar9);
      lib::L2CValue::L2CValue((L2CValue *)local_190,1.0);
      fVar10 = (float)lib::L2CValue::as_number((L2CValue *)local_190);
      app::lua_bind::MotionModule__set_rate_impl(*ppBVar9,fVar10);
      lib::L2CValue::~L2CValue((L2CValue *)local_190);
      fVar10 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar9);
      lib::L2CValue::L2CValue((L2CValue *)auStack192,fVar10);
      uVar11 = app::lua_bind::MotionModule__end_frame_impl(*ppBVar9);
      lib::L2CValue::L2CValue(aLStack208,uVar11);
      lib::L2CValue::L2CValue((L2CValue *)local_190,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack240,0x1a83998635);
      uVar4 = lib::L2CValue::as_integer((L2CValue *)local_190);
      uVar5 = lib::L2CValue::as_integer(aLStack240);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack224,fVar10);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue((L2CValue *)local_190);
      FUN_7100006480(aLStack240,param_1);
      lib::L2CValue::operator-(aLStack208,(L2CValue *)auStack192);
      lib::L2CValue::operator/(aLStack224,(L2CValue *)local_190);
      lib::L2CValue::~L2CValue((L2CValue *)local_190);
      lib::L2CValue::operator-(aLStack208,(L2CValue *)auStack192);
      lib::L2CValue::operator/(aLStack240,(L2CValue *)local_190);
      lib::L2CValue::~L2CValue((L2CValue *)local_190);
      lib::L2CValue::L2CValue((L2CValue *)local_190,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)local_190);
      lib::L2CAgent::push_lua_stack(param_1,aLStack240);
      lib::L2CAgent::push_lua_stack(param_1,aLStack288);
      app::sv_kinetic_energy::set_stable_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue((L2CValue *)local_190);
      lib::L2CValue::L2CValue((L2CValue *)local_190,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)local_190);
      lib::L2CAgent::push_lua_stack(param_1,aLStack240);
      lib::L2CAgent::push_lua_stack(param_1,aLStack288);
      app::sv_kinetic_energy::set_limit_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue((L2CValue *)local_190);
      lib::L2CValue::L2CValue((L2CValue *)local_190,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      fVar10 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar9);
      lib::L2CValue::L2CValue(aLStack304,fVar10);
      lib::L2CValue::operator*(aLStack256,aLStack304);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)local_190);
      lib::L2CAgent::push_lua_stack(param_1,aLStack288);
      lib::L2CAgent::push_lua_stack(param_1,aLStack320);
      app::sv_kinetic_energy::set_accel(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue((L2CValue *)local_190);
      lib::L2CValue::L2CValue((L2CValue *)local_190,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)local_190);
      lib::L2CAgent::push_lua_stack(param_1,aLStack288);
      lib::L2CAgent::push_lua_stack(param_1,aLStack304);
      app::sv_kinetic_energy::set_brake(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue((L2CValue *)local_190);
      lib::L2CValue::L2CValue((L2CValue *)local_190,0.0);
      lib::L2CValue::operator+(aLStack256,(L2CValue *)local_190);
      lib::L2CValue::~L2CValue((L2CValue *)local_190);
      lib::L2CValue::L2CValue
                ((L2CValue *)local_190,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_TURN_ACCEL_X);
      fVar10 = (float)lib::L2CValue::as_number(aLStack288);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_190);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)local_190);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::L2CValue((L2CValue *)local_190,false);
      uVar4 = lib::L2CValue::operator==(param_2,(L2CValue *)local_190);
      lib::L2CValue::~L2CValue((L2CValue *)local_190);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::operator=(aLStack272,aLStack256);
      }
      lib::L2CValue::L2CValue((L2CValue *)local_190,0.0);
      lib::L2CValue::operator+(aLStack272,(L2CValue *)local_190);
      lib::L2CValue::~L2CValue((L2CValue *)local_190);
      lib::L2CValue::L2CValue
                ((L2CValue *)local_190,
                 _FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_TURN_DASH_ACCEL_X);
      fVar10 = (float)lib::L2CValue::as_number(aLStack288);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_190);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)local_190);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack208);
      puVar6 = auStack192;
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)local_190,0.0);
      fVar10 = (float)lib::L2CValue::as_number((L2CValue *)local_190);
      app::lua_bind::MotionModule__set_rate_impl(*ppBVar9,fVar10);
      puVar6 = (undefined8 *)local_190;
    }
    lib::L2CValue::~L2CValue((L2CValue *)puVar6);
    lib::L2CValue::~L2CValue((L2CValue *)auStack176);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack192,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_TURN_DASH_ACCEL_X);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack192);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,fVar10);
  lib::L2CValue::L2CValue((L2CValue *)local_190,0.0);
  uVar4 = lib::L2CValue::operator<((L2CValue *)local_190,(L2CValue *)auStack176);
  lib::L2CValue::~L2CValue((L2CValue *)local_190);
  lib::L2CValue::~L2CValue((L2CValue *)auStack176);
  lib::L2CValue::~L2CValue((L2CValue *)auStack192);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)local_190,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_TURN_ACCEL_X);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_190);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,fVar10);
    lib::L2CValue::~L2CValue((L2CValue *)local_190);
    FUN_7100023460(auStack192,param_1);
    lib::L2CValue::L2CValue((L2CValue *)local_190,true);
    uVar4 = lib::L2CValue::operator==((L2CValue *)auStack192,(L2CValue *)local_190);
    lib::L2CValue::~L2CValue((L2CValue *)local_190);
    lib::L2CValue::~L2CValue((L2CValue *)auStack192);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack192,
                 _FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_TURN_DASH_ACCEL_X);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack192);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)local_190,fVar10);
      lib::L2CValue::operator=((L2CValue *)auStack176,(L2CValue *)local_190);
      lib::L2CValue::~L2CValue((L2CValue *)local_190);
      lib::L2CValue::~L2CValue((L2CValue *)auStack192);
    }
    lib::L2CValue::L2CValue((L2CValue *)local_190,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    fVar10 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack208,fVar10);
    lib::L2CValue::operator*((L2CValue *)auStack176,aLStack208);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)local_190);
    lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack192);
    lib::L2CAgent::push_lua_stack(param_1,aLStack224);
    app::sv_kinetic_energy::set_accel(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue((L2CValue *)auStack192);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue((L2CValue *)local_190);
    lib::L2CValue::~L2CValue((L2CValue *)auStack176);
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0x16);
  lib::L2CValue::L2CValue((L2CValue *)local_190,SITUATION_KIND_AIR);
  uVar4 = lib::L2CValue::operator==(pLVar7,(L2CValue *)local_190);
  lib::L2CValue::~L2CValue((L2CValue *)local_190);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)auStack192,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CAgent::clear_lua_stack(param_1);
    puVar6 = auStack192;
    lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)puVar6);
    fVar10 = (float)app::sv_kinetic_energy::get_speed_x(param_1->luaStateAgent);
    lib::L2CValue::L2CValue((L2CValue *)local_190,fVar10);
    lib::L2CAgent::math_abs((L2CAgent *)local_190,(L2CValue *)puVar6);
    lib::L2CValue::~L2CValue((L2CValue *)local_190);
    lib::L2CValue::~L2CValue((L2CValue *)auStack192);
    lib::L2CValue::L2CValue((L2CValue *)local_190,0.0);
    lib::L2CValue::operator+((L2CValue *)auStack176,(L2CValue *)local_190);
    lib::L2CValue::~L2CValue((L2CValue *)local_190);
    lib::L2CValue::L2CValue
              ((L2CValue *)local_190,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_SPEED_X);
    fVar10 = (float)lib::L2CValue::as_number((L2CValue *)auStack192);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_190);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)local_190);
    lib::L2CValue::~L2CValue((L2CValue *)auStack192);
    lib::L2CValue::L2CValue((L2CValue *)local_190,0.0);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack192,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_TURN_ACCEL_X);
    fVar10 = (float)lib::L2CValue::as_number((L2CValue *)local_190);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack192);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)auStack192);
    lib::L2CValue::~L2CValue((L2CValue *)local_190);
    lib::L2CValue::L2CValue(aLStack336,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_WALK);
    lib::L2CValue::L2CValue(aLStack352,false);
    lua2cpp::L2CFighterBase::change_status(param_1,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue((L2CValue *)auStack176);
  }
  FUN_7100023670(local_190,param_1);
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)local_190);
  lib::L2CValue::~L2CValue((L2CValue *)local_190);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_190,_FIGHTER_INKLING_STATUS_SPECIAL_S_FLAG_END);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_190);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)local_190);
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar9);
  lib::L2CValue::L2CValue((L2CValue *)local_190,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)local_190);
  lib::L2CValue::~L2CValue((L2CValue *)local_190);
  if ((bVar2 & 1U) != 0) {
    app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar9);
    lib::L2CValue::L2CValue((L2CValue *)auStack192,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CAgent::clear_lua_stack(param_1);
    puVar6 = auStack192;
    lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)puVar6);
    fVar10 = (float)app::sv_kinetic_energy::get_speed_x(param_1->luaStateAgent);
    lib::L2CValue::L2CValue((L2CValue *)local_190,fVar10);
    lib::L2CAgent::math_abs((L2CAgent *)local_190,(L2CValue *)puVar6);
    lib::L2CValue::~L2CValue((L2CValue *)local_190);
    lib::L2CValue::~L2CValue((L2CValue *)auStack192);
    lib::L2CValue::L2CValue((L2CValue *)local_190,0.0);
    lib::L2CValue::operator+((L2CValue *)auStack176,(L2CValue *)local_190);
    lib::L2CValue::~L2CValue((L2CValue *)local_190);
    lib::L2CValue::L2CValue
              ((L2CValue *)local_190,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_SPEED_X);
    fVar10 = (float)lib::L2CValue::as_number((L2CValue *)auStack192);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_190);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)local_190);
    lib::L2CValue::~L2CValue((L2CValue *)auStack192);
    lib::L2CValue::L2CValue((L2CValue *)local_190,0.0);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack192,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_TURN_ACCEL_X);
    fVar10 = (float)lib::L2CValue::as_number((L2CValue *)local_190);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack192);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)auStack192);
    lib::L2CValue::~L2CValue((L2CValue *)local_190);
    lib::L2CValue::L2CValue((L2CValue *)auStack192);
    lib::L2CValue::L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack224);
    pfVar8 = (float *)app::lua_bind::PostureModule__rot_impl(*ppBVar9,0);
    lib::L2CValue::L2CValue((L2CValue *)local_190,*pfVar8);
    pLVar7 = (L2CValue *)(local_190 + 0x10);
    lib::L2CValue::L2CValue(pLVar7,pfVar8[1]);
    lib::L2CValue::L2CValue(aLStack368,pfVar8[2]);
    lib::L2CValue::operator=((L2CValue *)auStack192,(L2CValue *)local_190);
    lib::L2CValue::operator=(aLStack208,pLVar7);
    lib::L2CValue::operator=(aLStack224,aLStack368);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(pLVar7);
    lib::L2CValue::~L2CValue((L2CValue *)local_190);
    lib::L2CValue::L2CValue((L2CValue *)local_190,-1.0);
    lib::L2CValue::operator*((L2CValue *)auStack192,(L2CValue *)local_190);
    lib::L2CValue::~L2CValue((L2CValue *)local_190);
    lib::L2CValue::operator=((L2CValue *)auStack192,aLStack240);
    lib::L2CValue::~L2CValue(aLStack240);
    uVar4 = lib::L2CValue::as_number((L2CValue *)auStack192);
    lVar12 = lib::L2CValue::as_number(aLStack208);
    uVar11 = lib::L2CValue::as_number(aLStack224);
    local_190._0_8_ = (void **)(uVar4 & 0xffffffff | lVar12 << 0x20);
    local_190._8_8_ = (lua_State *)(ulong)uVar11;
    app::lua_bind::PostureModule__set_rot_impl(*ppBVar9,(Vector3f *)local_190,0);
    lib::L2CValue::L2CValue((L2CValue *)local_190,0.0);
    lib::L2CValue::operator+((L2CValue *)auStack192,(L2CValue *)local_190);
    lib::L2CValue::~L2CValue((L2CValue *)local_190);
    lib::L2CValue::L2CValue
              ((L2CValue *)local_190,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_DEGREE);
    fVar10 = (float)lib::L2CValue::as_number(aLStack240);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_190);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)local_190);
    lib::L2CValue::~L2CValue(aLStack240);
    FUN_7100006480(local_190,param_1);
    uVar4 = lib::L2CValue::operator<=((L2CValue *)local_190,(L2CValue *)auStack176);
    lib::L2CValue::~L2CValue((L2CValue *)local_190);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack448,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_WALK);
      lib::L2CValue::L2CValue(aLStack464,false);
      lua2cpp::L2CFighterBase::change_status(param_1,(L2CValue)0x40,(L2CValue)0x30);
      lib::L2CValue::~L2CValue(aLStack464);
      pLVar7 = aLStack448;
    }
    else {
      lib::L2CValue::L2CValue(aLStack416,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_RUN);
      lib::L2CValue::L2CValue(aLStack432,false);
      lua2cpp::L2CFighterBase::change_status(param_1,(L2CValue)0x60,(L2CValue)0x50);
      lib::L2CValue::~L2CValue(aLStack432);
      pLVar7 = aLStack416;
    }
    lib::L2CValue::~L2CValue(pLVar7);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue((L2CValue *)auStack192);
    lib::L2CValue::~L2CValue((L2CValue *)auStack176);
  }
  lib::L2CValue::~L2CValue((L2CValue *)(auStack176 + 0x10));
  return;
}

