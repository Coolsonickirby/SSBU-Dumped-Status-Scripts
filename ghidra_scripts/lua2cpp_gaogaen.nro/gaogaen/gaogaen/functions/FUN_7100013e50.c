
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100013e50(L2CAgent *param_1,L2CValue *param_2)

{
  BattleObject **this;
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  BattleObjectModuleAccessor *pBVar7;
  float fVar8;
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
  
  this = &param_1[2].battleObject;
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
  lib::L2CValue::L2CValue(aLStack112,pLVar4);
  lib::L2CValue::L2CValue(aLStack96,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  fVar8 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,fVar8);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  fVar8 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack144,fVar8);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack176,0x16ca28254b);
  uVar5 = lib::L2CValue::as_integer(aLStack96);
  uVar6 = lib::L2CValue::as_integer(aLStack176);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_1->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack160,fVar8);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack192,0x1a445abb41);
  uVar5 = lib::L2CValue::as_integer(aLStack96);
  uVar6 = lib::L2CValue::as_integer(aLStack192);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_1->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack176,fVar8);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack208,0x1a2ab27608);
  uVar5 = lib::L2CValue::as_integer(aLStack96);
  uVar6 = lib::L2CValue::as_integer(aLStack208);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_1->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack192,fVar8);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack96);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator==(pLVar4,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_FALL);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar3);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar3);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_SPECIAL_LW);
  uVar5 = lib::L2CValue::operator==(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAOGAEN_STATUS_KIND_SPECIAL_LW_HIT);
    uVar5 = lib::L2CValue::operator==(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAOGAEN_STATUS_KIND_SPECIAL_LW_TURN);
      uVar5 = lib::L2CValue::operator==(aLStack112,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) goto LAB_7100014fe8;
    }
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar4,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack208,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack96);
      lib::L2CAgent::push_lua_stack(param_1,aLStack208);
      lib::L2CAgent::push_lua_stack(param_1,aLStack224);
      lib::L2CAgent::push_lua_stack(param_1,aLStack240);
      lib::L2CAgent::push_lua_stack(param_1,aLStack256);
      lib::L2CAgent::push_lua_stack(param_1,aLStack272);
      lib::L2CAgent::push_lua_stack(param_1,aLStack288);
      app::sv_kinetic_energy::reset_energy(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack96);
      bVar2 = lib::L2CValue::operator.cast.to.bool(param_2);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack96);
        lib::L2CAgent::push_lua_stack(param_1,aLStack144);
        app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CValue::operator-(aLStack192);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack96);
        lib::L2CAgent::push_lua_stack(param_1,aLStack208);
        app::sv_kinetic_energy::set_accel(param_1->luaStateAgent);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CValue::L2CValue(aLStack208,0.0);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack96);
        lib::L2CAgent::push_lua_stack(param_1,aLStack208);
        app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CValue::operator-(aLStack192);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack96);
        lib::L2CAgent::push_lua_stack(param_1,aLStack208);
        app::sv_kinetic_energy::set_accel(param_1->luaStateAgent);
      }
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::KineticModule__enable_energy_impl(param_1->moduleAccessor,iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,5);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
      app::KineticUtility::clear_unable_energy(iVar3,pBVar7);
    }
    lib::L2CValue::~L2CValue(aLStack96);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar4,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue(aLStack208,ENERGY_STOP_RESET_TYPE_AIR);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack96);
      lib::L2CAgent::push_lua_stack(param_1,aLStack208);
      lib::L2CAgent::push_lua_stack(param_1,aLStack128);
      lib::L2CAgent::push_lua_stack(param_1,aLStack224);
      lib::L2CAgent::push_lua_stack(param_1,aLStack240);
      lib::L2CAgent::push_lua_stack(param_1,aLStack256);
      lib::L2CAgent::push_lua_stack(param_1,aLStack272);
      app::sv_kinetic_energy::reset_energy(param_1->luaStateAgent);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue(aLStack208,ENERGY_STOP_RESET_TYPE_GROUND);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack96);
      lib::L2CAgent::push_lua_stack(param_1,aLStack208);
      lib::L2CAgent::push_lua_stack(param_1,aLStack128);
      lib::L2CAgent::push_lua_stack(param_1,aLStack224);
      lib::L2CAgent::push_lua_stack(param_1,aLStack240);
      lib::L2CAgent::push_lua_stack(param_1,aLStack256);
      lib::L2CAgent::push_lua_stack(param_1,aLStack272);
      app::sv_kinetic_energy::reset_energy(param_1->luaStateAgent);
    }
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__enable_energy_impl(param_1->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar4,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_MOTION);
      lib::L2CValue::L2CValue(aLStack208,_ENERGY_MOTION_RESET_TYPE_AIR_TRANS);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack96);
      lib::L2CAgent::push_lua_stack(param_1,aLStack208);
      lib::L2CAgent::push_lua_stack(param_1,aLStack224);
      lib::L2CAgent::push_lua_stack(param_1,aLStack240);
      lib::L2CAgent::push_lua_stack(param_1,aLStack256);
      lib::L2CAgent::push_lua_stack(param_1,aLStack272);
      lib::L2CAgent::push_lua_stack(param_1,aLStack288);
      app::sv_kinetic_energy::reset_energy(param_1->luaStateAgent);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_MOTION);
      lib::L2CValue::L2CValue(aLStack208,_ENERGY_MOTION_RESET_TYPE_GROUND_TRANS);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack96);
      lib::L2CAgent::push_lua_stack(param_1,aLStack208);
      lib::L2CAgent::push_lua_stack(param_1,aLStack224);
      lib::L2CAgent::push_lua_stack(param_1,aLStack240);
      lib::L2CAgent::push_lua_stack(param_1,aLStack256);
      lib::L2CAgent::push_lua_stack(param_1,aLStack272);
      lib::L2CAgent::push_lua_stack(param_1,aLStack288);
      app::sv_kinetic_energy::reset_energy(param_1->luaStateAgent);
    }
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator==(param_2,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAOGAEN_STATUS_KIND_SPECIAL_LW_TURN);
      uVar5 = lib::L2CValue::operator==(aLStack112,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_MOTION);
        lib::L2CValue::L2CValue(aLStack208,-1.0);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack96);
        lib::L2CAgent::push_lua_stack(param_1,aLStack208);
        app::sv_kinetic_energy::set_speed_mul(param_1->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack96);
      }
    }
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__enable_energy_impl(param_1->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,5);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
    app::KineticUtility::clear_unable_energy(iVar3,pBVar7);
  }
  else {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar4,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack208,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack96);
      lib::L2CAgent::push_lua_stack(param_1,aLStack208);
      lib::L2CAgent::push_lua_stack(param_1,aLStack224);
      lib::L2CAgent::push_lua_stack(param_1,aLStack240);
      lib::L2CAgent::push_lua_stack(param_1,aLStack256);
      lib::L2CAgent::push_lua_stack(param_1,aLStack272);
      lib::L2CAgent::push_lua_stack(param_1,aLStack288);
      app::sv_kinetic_energy::reset_energy(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack96);
      bVar2 = lib::L2CValue::operator.cast.to.bool(param_2);
      if ((bVar2 & 1U) == 0) {
LAB_7100014588:
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack96);
        lib::L2CAgent::push_lua_stack(param_1,aLStack144);
        app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
      }
      else {
        lib::L2CValue::L2CValue
                  (aLStack224,_FIGHTER_GAOGAEN_INSTANCE_WORK_ID_FLAG_INVALID_SPECIAL_AIR_LW_SPPED_Y)
        ;
        iVar3 = lib::L2CValue::as_integer(aLStack224);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack96,false);
        uVar5 = lib::L2CValue::operator==(aLStack208,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack224);
        if ((uVar5 & 1) == 0) goto LAB_7100014588;
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CValue::operator*(aLStack144,aLStack176);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack96);
        lib::L2CAgent::push_lua_stack(param_1,aLStack208);
        app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue
                  (aLStack96,_FIGHTER_GAOGAEN_INSTANCE_WORK_ID_FLAG_INVALID_SPECIAL_AIR_LW_SPPED_Y);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar3);
      }
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::KineticModule__enable_energy_impl(param_1->moduleAccessor,iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,5);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
      app::KineticUtility::clear_unable_energy(iVar3,pBVar7);
    }
    lib::L2CValue::~L2CValue(aLStack96);
    bVar2 = lib::L2CValue::operator.cast.to.bool(param_2);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::operator*(aLStack128,aLStack160);
      lib::L2CValue::operator=(aLStack128,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar4,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue(aLStack208,ENERGY_STOP_RESET_TYPE_AIR);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack96);
      lib::L2CAgent::push_lua_stack(param_1,aLStack208);
      lib::L2CAgent::push_lua_stack(param_1,aLStack128);
      lib::L2CAgent::push_lua_stack(param_1,aLStack224);
      lib::L2CAgent::push_lua_stack(param_1,aLStack240);
      lib::L2CAgent::push_lua_stack(param_1,aLStack256);
      lib::L2CAgent::push_lua_stack(param_1,aLStack272);
      app::sv_kinetic_energy::reset_energy(param_1->luaStateAgent);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue(aLStack208,ENERGY_STOP_RESET_TYPE_GROUND);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack96);
      lib::L2CAgent::push_lua_stack(param_1,aLStack208);
      lib::L2CAgent::push_lua_stack(param_1,aLStack128);
      lib::L2CAgent::push_lua_stack(param_1,aLStack224);
      lib::L2CAgent::push_lua_stack(param_1,aLStack240);
      lib::L2CAgent::push_lua_stack(param_1,aLStack256);
      lib::L2CAgent::push_lua_stack(param_1,aLStack272);
      app::sv_kinetic_energy::reset_energy(param_1->luaStateAgent);
    }
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__enable_energy_impl(param_1->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar4,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_MOTION);
      lib::L2CValue::L2CValue(aLStack208,_ENERGY_MOTION_RESET_TYPE_AIR_TRANS);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack96);
      lib::L2CAgent::push_lua_stack(param_1,aLStack208);
      lib::L2CAgent::push_lua_stack(param_1,aLStack224);
      lib::L2CAgent::push_lua_stack(param_1,aLStack240);
      lib::L2CAgent::push_lua_stack(param_1,aLStack256);
      lib::L2CAgent::push_lua_stack(param_1,aLStack272);
      lib::L2CAgent::push_lua_stack(param_1,aLStack288);
      app::sv_kinetic_energy::reset_energy(param_1->luaStateAgent);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_MOTION);
      lib::L2CValue::L2CValue(aLStack208,_ENERGY_MOTION_RESET_TYPE_GROUND_TRANS);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack96);
      lib::L2CAgent::push_lua_stack(param_1,aLStack208);
      lib::L2CAgent::push_lua_stack(param_1,aLStack224);
      lib::L2CAgent::push_lua_stack(param_1,aLStack240);
      lib::L2CAgent::push_lua_stack(param_1,aLStack256);
      lib::L2CAgent::push_lua_stack(param_1,aLStack272);
      lib::L2CAgent::push_lua_stack(param_1,aLStack288);
      app::sv_kinetic_energy::reset_energy(param_1->luaStateAgent);
    }
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__enable_energy_impl(param_1->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,5);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
    app::KineticUtility::clear_unable_energy(iVar3,pBVar7);
  }
  lib::L2CValue::~L2CValue(aLStack96);
LAB_7100014fe8:
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

