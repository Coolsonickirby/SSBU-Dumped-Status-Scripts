
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000223c0(L2CAgent *param_1,L2CValue *param_2)

{
  BattleObject **this;
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  BattleObjectModuleAccessor *pBVar7;
  BattleObjectModuleAccessor **ppBVar8;
  float fVar9;
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
  
  lib::L2CValue::L2CValue(aLStack96,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  ppBVar8 = &param_1->moduleAccessor;
  fVar9 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack112,fVar9);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  fVar9 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack128,fVar9);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack160,0x1473cdf62e);
  uVar4 = lib::L2CValue::as_integer(aLStack96);
  uVar5 = lib::L2CValue::as_integer(aLStack160);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack144,fVar9);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack176,0x144eaddf9e);
  uVar4 = lib::L2CValue::as_integer(aLStack96);
  uVar5 = lib::L2CValue::as_integer(aLStack176);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack160,fVar9);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack192,0x16642d4001);
  uVar4 = lib::L2CValue::as_integer(aLStack96);
  uVar5 = lib::L2CValue::as_integer(aLStack192);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack176,fVar9);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack208,0x14d3622816);
  uVar4 = lib::L2CValue::as_integer(aLStack96);
  uVar5 = lib::L2CValue::as_integer(aLStack208);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack192,fVar9);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack224,0x140a366719);
  uVar4 = lib::L2CValue::as_integer(aLStack96);
  uVar5 = lib::L2CValue::as_integer(aLStack224);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack208,fVar9);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack240,0x1298693013);
  uVar4 = lib::L2CValue::as_integer(aLStack96);
  uVar5 = lib::L2CValue::as_integer(aLStack240);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack224,fVar9);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack256,0x15b54c979b);
  uVar4 = lib::L2CValue::as_integer(aLStack96);
  uVar5 = lib::L2CValue::as_integer(aLStack256);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack240,fVar9);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack272,0x1303b15c7d);
  uVar4 = lib::L2CValue::as_integer(aLStack96);
  uVar5 = lib::L2CValue::as_integer(aLStack272);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack256,fVar9);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack96);
  this = &param_1[2].battleObject;
  pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_SPECIAL_N);
  uVar4 = lib::L2CValue::operator==(pLVar6,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MIIFIGHTER_STATUS_KIND_SPECIAL_N2_MISS);
    uVar4 = lib::L2CValue::operator==(pLVar6,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MIIFIGHTER_STATUS_KIND_SPECIAL_N2_FINISH);
      uVar4 = lib::L2CValue::operator==(pLVar6,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar4 & 1) == 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MIIFIGHTER_STATUS_KIND_SPECIAL_N2_FINISH_MISS);
        uVar4 = lib::L2CValue::operator==(pLVar6,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar4 & 1) == 0) goto LAB_710002354c;
        lib::L2CValue::L2CValue
                  (aLStack272,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_MACH_PUNCH_FLAG_SET_FALL_SPEED);
        iVar3 = lib::L2CValue::as_integer(aLStack272);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack272);
        if ((bVar2 & 1U) == 0) goto LAB_710002354c;
        lib::L2CValue::L2CValue
                  (aLStack96,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_MACH_PUNCH_FLAG_SET_FALL_SPEED);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar8,iVar3);
        lib::L2CValue::~L2CValue(aLStack96);
        pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
        lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
        uVar4 = lib::L2CValue::operator==(pLVar6,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar4 & 1) == 0) goto LAB_710002354c;
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CValue::operator-(aLStack240);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack96);
        lib::L2CAgent::push_lua_stack(param_1,aLStack272);
        app::sv_kinetic_energy::set_accel(param_1->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack96);
        lib::L2CAgent::push_lua_stack(param_1,aLStack256);
        app::sv_kinetic_energy::set_stable_speed(param_1->luaStateAgent);
      }
      else {
        lib::L2CValue::L2CValue
                  (aLStack272,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_MACH_PUNCH_FLAG_SET_FALL_SPEED);
        iVar3 = lib::L2CValue::as_integer(aLStack272);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack272);
        if ((bVar2 & 1U) == 0) goto LAB_710002354c;
        lib::L2CValue::L2CValue
                  (aLStack96,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_MACH_PUNCH_FLAG_SET_FALL_SPEED);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar8,iVar3);
        lib::L2CValue::~L2CValue(aLStack96);
        pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
        lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
        uVar4 = lib::L2CValue::operator==(pLVar6,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar4 & 1) == 0) goto LAB_710002354c;
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CValue::operator-(aLStack240);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack96);
        lib::L2CAgent::push_lua_stack(param_1,aLStack272);
        app::sv_kinetic_energy::set_accel(param_1->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack96);
        lib::L2CAgent::push_lua_stack(param_1,aLStack256);
        app::sv_kinetic_energy::set_stable_speed(param_1->luaStateAgent);
      }
    }
    else {
      lib::L2CValue::L2CValue
                (aLStack272,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_MACH_PUNCH_FLAG_SET_FALL_SPEED);
      iVar3 = lib::L2CValue::as_integer(aLStack272);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack272);
      if ((bVar2 & 1U) == 0) goto LAB_710002354c;
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_MACH_PUNCH_FLAG_SET_FALL_SPEED);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar8,iVar3);
      lib::L2CValue::~L2CValue(aLStack96);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar4 = lib::L2CValue::operator==(pLVar6,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar4 & 1) == 0) goto LAB_710002354c;
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::operator-(aLStack240);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack96);
      lib::L2CAgent::push_lua_stack(param_1,aLStack272);
      app::sv_kinetic_energy::set_accel(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack96);
      lib::L2CAgent::push_lua_stack(param_1,aLStack256);
      app::sv_kinetic_energy::set_stable_speed(param_1->luaStateAgent);
    }
  }
  else {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator==(pLVar6,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_MOTION);
      lib::L2CValue::L2CValue(aLStack272,_ENERGY_MOTION_RESET_TYPE_AIR_TRANS);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lib::L2CValue::L2CValue(aLStack352,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack96);
      lib::L2CAgent::push_lua_stack(param_1,aLStack272);
      lib::L2CAgent::push_lua_stack(param_1,aLStack288);
      lib::L2CAgent::push_lua_stack(param_1,aLStack304);
      lib::L2CAgent::push_lua_stack(param_1,aLStack320);
      lib::L2CAgent::push_lua_stack(param_1,aLStack336);
      lib::L2CAgent::push_lua_stack(param_1,aLStack352);
      app::sv_kinetic_energy::reset_energy(param_1->luaStateAgent);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_MOTION);
      lib::L2CValue::L2CValue(aLStack272,_ENERGY_MOTION_RESET_TYPE_GROUND_TRANS);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lib::L2CValue::L2CValue(aLStack352,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack96);
      lib::L2CAgent::push_lua_stack(param_1,aLStack272);
      lib::L2CAgent::push_lua_stack(param_1,aLStack288);
      lib::L2CAgent::push_lua_stack(param_1,aLStack304);
      lib::L2CAgent::push_lua_stack(param_1,aLStack320);
      lib::L2CAgent::push_lua_stack(param_1,aLStack336);
      lib::L2CAgent::push_lua_stack(param_1,aLStack352);
      app::sv_kinetic_energy::reset_energy(param_1->luaStateAgent);
    }
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__enable_energy_impl(*ppBVar8,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,5);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
    app::KineticUtility::clear_unable_energy(iVar3,pBVar7);
    lib::L2CValue::~L2CValue(aLStack96);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator==(pLVar6,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack272,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lib::L2CValue::L2CValue(aLStack352,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack96);
      lib::L2CAgent::push_lua_stack(param_1,aLStack272);
      lib::L2CAgent::push_lua_stack(param_1,aLStack288);
      lib::L2CAgent::push_lua_stack(param_1,aLStack304);
      lib::L2CAgent::push_lua_stack(param_1,aLStack320);
      lib::L2CAgent::push_lua_stack(param_1,aLStack336);
      lib::L2CAgent::push_lua_stack(param_1,aLStack352);
      app::sv_kinetic_energy::reset_energy(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack96);
      bVar2 = lib::L2CValue::operator.cast.to.bool(param_2);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack272,_FIGHTER_MIIFIGHTER_INSTANCE_WORK_ID_FLAG_MACH_PUNCH_FALL);
        iVar3 = lib::L2CValue::as_integer(aLStack272);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack272);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CValue::operator*(aLStack128,aLStack160);
          lib::L2CAgent::clear_lua_stack(param_1);
          lib::L2CAgent::push_lua_stack(param_1,aLStack96);
          lib::L2CAgent::push_lua_stack(param_1,aLStack272);
          app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
          lib::L2CValue::~L2CValue(aLStack272);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CValue::operator-(aLStack176);
          lib::L2CAgent::clear_lua_stack(param_1);
          lib::L2CAgent::push_lua_stack(param_1,aLStack96);
          lib::L2CAgent::push_lua_stack(param_1,aLStack272);
          app::sv_kinetic_energy::set_accel(param_1->luaStateAgent);
          lib::L2CValue::~L2CValue(aLStack272);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CAgent::clear_lua_stack(param_1);
          lib::L2CAgent::push_lua_stack(param_1,aLStack96);
          lib::L2CAgent::push_lua_stack(param_1,aLStack192);
          app::sv_kinetic_energy::set_stable_speed(param_1->luaStateAgent);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::L2CValue
                    (aLStack96,_FIGHTER_MIIFIGHTER_INSTANCE_WORK_ID_FLAG_MACH_PUNCH_FALL);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar3);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CAgent::clear_lua_stack(param_1);
          lib::L2CAgent::push_lua_stack(param_1,aLStack96);
          lib::L2CAgent::push_lua_stack(param_1,aLStack128);
          app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
        }
        lib::L2CValue::~L2CValue(aLStack96);
      }
      lib::L2CValue::L2CValue
                (aLStack272,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_MACH_PUNCH_FLAG_PULL_ATTACK_HIT);
      iVar3 = lib::L2CValue::as_integer(aLStack272);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack272);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CValue::operator-(aLStack208);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack96);
        lib::L2CAgent::push_lua_stack(param_1,aLStack272);
        app::sv_kinetic_energy::set_accel(param_1->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack96);
        lib::L2CAgent::push_lua_stack(param_1,aLStack224);
        app::sv_kinetic_energy::set_stable_speed(param_1->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack96);
      }
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::KineticModule__enable_energy_impl(*ppBVar8,iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,5);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
      app::KineticUtility::clear_unable_energy(iVar3,pBVar7);
    }
    lib::L2CValue::~L2CValue(aLStack96);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator==(pLVar6,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue(aLStack272,ENERGY_STOP_RESET_TYPE_AIR);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lib::L2CValue::L2CValue(aLStack352,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack96);
      lib::L2CAgent::push_lua_stack(param_1,aLStack272);
      lib::L2CAgent::push_lua_stack(param_1,aLStack288);
      lib::L2CAgent::push_lua_stack(param_1,aLStack304);
      lib::L2CAgent::push_lua_stack(param_1,aLStack320);
      lib::L2CAgent::push_lua_stack(param_1,aLStack336);
      lib::L2CAgent::push_lua_stack(param_1,aLStack352);
      app::sv_kinetic_energy::reset_energy(param_1->luaStateAgent);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue(aLStack272,ENERGY_STOP_RESET_TYPE_GROUND);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lib::L2CValue::L2CValue(aLStack352,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack96);
      lib::L2CAgent::push_lua_stack(param_1,aLStack272);
      lib::L2CAgent::push_lua_stack(param_1,aLStack288);
      lib::L2CAgent::push_lua_stack(param_1,aLStack304);
      lib::L2CAgent::push_lua_stack(param_1,aLStack320);
      lib::L2CAgent::push_lua_stack(param_1,aLStack336);
      lib::L2CAgent::push_lua_stack(param_1,aLStack352);
      app::sv_kinetic_energy::reset_energy(param_1->luaStateAgent);
    }
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack96);
    bVar2 = lib::L2CValue::operator.cast.to.bool(param_2);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack96);
      lib::L2CAgent::push_lua_stack(param_1,aLStack112);
      lib::L2CAgent::push_lua_stack(param_1,aLStack272);
      app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::operator*(aLStack112,aLStack144);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack96);
      lib::L2CAgent::push_lua_stack(param_1,aLStack272);
      lib::L2CAgent::push_lua_stack(param_1,aLStack288);
      app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack288);
    }
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__enable_energy_impl(*ppBVar8,iVar3);
  }
  lib::L2CValue::~L2CValue(aLStack96);
LAB_710002354c:
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

