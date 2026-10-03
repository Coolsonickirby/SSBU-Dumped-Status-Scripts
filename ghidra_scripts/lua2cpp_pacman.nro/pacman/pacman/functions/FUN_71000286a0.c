
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000286a0(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  L2CValue *pLVar9;
  void ***pppvVar10;
  BattleObjectModuleAccessor **ppBVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  long lVar16;
  L2CValue aLStack784 [16];
  L2CValue aLStack768 [16];
  L2CValue aLStack752 [16];
  L2CValue aLStack736 [16];
  L2CValue aLStack720 [16];
  L2CValue aLStack704 [16];
  L2CValue aLStack688 [16];
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  undefined auStack528 [16];
  undefined auStack512 [16];
  undefined auStack496 [16];
  undefined auStack480 [16];
  undefined auStack464 [16];
  undefined auStack448 [16];
  undefined auStack432 [32];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  undefined auStack352 [32];
  undefined auStack320 [32];
  undefined auStack288 [32];
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
  void **local_60;
  lua_State *plStack88;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
  uVar6 = lib::L2CValue::operator==(param_3,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(param_1,0);
    return;
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  ppBVar11 = &param_2->moduleAccessor;
  fVar12 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue(aLStack112,fVar12);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  fVar12 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue(aLStack128,fVar12);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::operator*(aLStack112,aLStack112);
  lib::L2CValue::operator*(aLStack128,aLStack128);
  pLVar7 = aLStack176;
  lib::L2CValue::operator+(aLStack160,pLVar7);
  lib::L2CAgent::math_sqrt((L2CAgent *)&local_60,pLVar7);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_INT_EAT_ESA_INDEX);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue(aLStack160,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  fVar12 = (float)app::lua_bind::PostureModule__pos_x_impl(*ppBVar11);
  lib::L2CValue::L2CValue(aLStack176,fVar12);
  fVar12 = (float)app::lua_bind::PostureModule__pos_y_impl(*ppBVar11);
  lib::L2CValue::L2CValue(aLStack192,fVar12);
  fVar12 = (float)app::lua_bind::PostureModule__pos_z_impl(*ppBVar11);
  lib::L2CValue::L2CValue(aLStack208,fVar12);
  fVar12 = (float)app::lua_bind::PostureModule__scale_impl(*ppBVar11);
  lib::L2CValue::L2CValue(aLStack224,fVar12);
  lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)auStack288,0x8afaa2d47);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack288 + 0x10));
  pLVar7 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)auStack288);
  fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar6,(ulong)pLVar7);
  lib::L2CValue::L2CValue(aLStack256,fVar12);
  lib::L2CValue::operator*(aLStack256,aLStack224);
  lib::L2CValue::operator+(aLStack192,aLStack240);
  lib::L2CValue::operator=(aLStack192,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue((L2CValue *)auStack288);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_ESA_POS_X0);
  lib::L2CValue::operator+((L2CValue *)&local_60,aLStack160);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  iVar3 = lib::L2CValue::as_integer(aLStack256);
  fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue(aLStack240,fVar12);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_ESA_POS_Y0);
  lib::L2CValue::operator+((L2CValue *)&local_60,aLStack160);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack288 + 0x10));
  fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue(aLStack256,fVar12);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack288 + 0x10),_FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLAG_EAT_ESA_TOP)
  ;
  iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack288 + 0x10));
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack288 + 0x10),
               _FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_TOP_ESA_POS_X);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack288 + 0x10));
    fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar12);
    lib::L2CValue::operator=(aLStack240,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack288 + 0x10),
               _FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_TOP_ESA_POS_Y);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack288 + 0x10));
    fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar12);
    lib::L2CValue::operator=(aLStack256,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
  }
  lib::L2CValue::operator-(aLStack240,aLStack176);
  lib::L2CValue::operator-(aLStack256,aLStack192);
  pLVar9 = aLStack112;
  lib::L2CAgent::math_atan((L2CAgent *)aLStack128,pLVar9,pLVar7);
  lib::L2CAgent::math_deg((L2CAgent *)&local_60,pLVar9);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,-360.0);
  uVar6 = lib::L2CValue::operator<((L2CValue *)(auStack320 + 0x10),(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,360.0);
    lib::L2CValue::operator+((L2CValue *)(auStack320 + 0x10),(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::operator=((L2CValue *)(auStack320 + 0x10),(L2CValue *)auStack320);
    lib::L2CValue::~L2CValue((L2CValue *)auStack320);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,360.0);
  pLVar9 = (L2CValue *)(auStack320 + 0x10);
  uVar6 = lib::L2CValue::operator<((L2CValue *)&local_60,pLVar9);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,360.0);
    lib::L2CValue::operator-((L2CValue *)(auStack320 + 0x10),(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    pLVar9 = (L2CValue *)auStack320;
    lib::L2CValue::operator=((L2CValue *)(auStack320 + 0x10),pLVar9);
    lib::L2CValue::~L2CValue((L2CValue *)auStack320);
  }
  lib::L2CAgent::clear_lua_stack(param_2);
  fVar12 = (float)app::sv_fighter_util::get_gravity_radian(param_2->luaStateAgent);
  lib::L2CValue::L2CValue((L2CValue *)auStack320,fVar12);
  lib::L2CAgent::math_deg((L2CAgent *)auStack320,pLVar9);
  pLVar9 = (L2CValue *)(auStack288 + 0x10);
  lib::L2CAgent::math_atan((L2CAgent *)auStack288,pLVar9,pLVar7);
  lib::L2CAgent::math_deg((L2CAgent *)&local_60,pLVar9);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::operator+((L2CValue *)auStack352,(L2CValue *)(auStack352 + 0x10));
  lib::L2CValue::operator=((L2CValue *)auStack352,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,-360.0);
  uVar6 = lib::L2CValue::operator<((L2CValue *)auStack352,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,360.0);
    lib::L2CValue::operator+((L2CValue *)auStack352,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::operator=((L2CValue *)auStack352,aLStack368);
    lib::L2CValue::~L2CValue(aLStack368);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,360.0);
  uVar6 = lib::L2CValue::operator<((L2CValue *)&local_60,(L2CValue *)auStack352);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,360.0);
    lib::L2CValue::operator-((L2CValue *)auStack352,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::operator=((L2CValue *)auStack352,aLStack368);
    lib::L2CValue::~L2CValue(aLStack368);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack384,0x1299d6647d);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar8 = lib::L2CValue::as_integer(aLStack384);
  fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar6,uVar8);
  lib::L2CValue::L2CValue(aLStack368,fVar12);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  pLVar7 = (L2CValue *)auStack352;
  lib::L2CValue::operator-((L2CValue *)(auStack320 + 0x10),pLVar7);
  lib::L2CAgent::math_abs((L2CAgent *)&local_60,pLVar7);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)(auStack432 + 0x10),0xa91fe294c);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)(auStack432 + 0x10));
  fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar6,uVar8);
  lib::L2CValue::L2CValue(aLStack400,fVar12);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack432 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)auStack432,0x10bcd7e7e1);
  pLVar7 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack432);
  fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,(ulong)pLVar7,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)(auStack432 + 0x10),fVar12);
  lib::L2CValue::~L2CValue((L2CValue *)auStack432);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CAgent::math_rad((L2CAgent *)auStack352,pLVar7);
  lib::L2CAgent::math_cos((L2CAgent *)auStack448,pLVar7);
  pppvVar10 = &local_60;
  lib::L2CValue::operator*(aLStack144,(L2CValue *)pppvVar10);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)auStack448);
  lib::L2CAgent::math_rad((L2CAgent *)auStack352,(L2CValue *)pppvVar10);
  lib::L2CAgent::math_sin((L2CAgent *)auStack464,(L2CValue *)pppvVar10);
  pppvVar10 = &local_60;
  lib::L2CValue::operator*(aLStack144,(L2CValue *)pppvVar10);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)auStack464);
  lib::L2CAgent::math_abs((L2CAgent *)auStack432,(L2CValue *)pppvVar10);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.01);
  pppvVar10 = &local_60;
  uVar6 = lib::L2CValue::operator<((L2CValue *)auStack464,(L2CValue *)pppvVar10);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)auStack464);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    pppvVar10 = &local_60;
    lib::L2CValue::operator=((L2CValue *)auStack432,(L2CValue *)pppvVar10);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  }
  lib::L2CAgent::math_abs((L2CAgent *)auStack448,(L2CValue *)pppvVar10);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.01);
  pppvVar10 = &local_60;
  uVar6 = lib::L2CValue::operator<((L2CValue *)auStack464,(L2CValue *)pppvVar10);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)auStack464);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    pppvVar10 = &local_60;
    lib::L2CValue::operator=((L2CValue *)auStack448,(L2CValue *)pppvVar10);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  }
  lib::L2CAgent::math_rad((L2CAgent *)auStack352,(L2CValue *)pppvVar10);
  lib::L2CAgent::math_cos((L2CAgent *)auStack480,(L2CValue *)pppvVar10);
  pppvVar10 = &local_60;
  lib::L2CValue::operator*(aLStack400,(L2CValue *)pppvVar10);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)auStack480);
  lib::L2CAgent::math_rad((L2CAgent *)auStack352,(L2CValue *)pppvVar10);
  lib::L2CAgent::math_sin((L2CAgent *)auStack496,(L2CValue *)pppvVar10);
  pppvVar10 = &local_60;
  lib::L2CValue::operator*(aLStack400,(L2CValue *)pppvVar10);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)auStack496);
  lib::L2CAgent::math_rad((L2CAgent *)auStack352,(L2CValue *)pppvVar10);
  lib::L2CAgent::math_cos((L2CAgent *)auStack512,(L2CValue *)pppvVar10);
  pppvVar10 = &local_60;
  lib::L2CValue::operator*((L2CValue *)(auStack432 + 0x10),(L2CValue *)pppvVar10);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)auStack512);
  lib::L2CAgent::math_rad((L2CAgent *)auStack352,(L2CValue *)pppvVar10);
  lib::L2CAgent::math_sin((L2CAgent *)auStack528,(L2CValue *)pppvVar10);
  pppvVar10 = &local_60;
  lib::L2CValue::operator*((L2CValue *)(auStack432 + 0x10),(L2CValue *)pppvVar10);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)auStack528);
  lib::L2CAgent::math_abs((L2CAgent *)auStack496,(L2CValue *)pppvVar10);
  pppvVar10 = &local_60;
  lib::L2CValue::operator=((L2CValue *)auStack496,(L2CValue *)pppvVar10);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CAgent::math_abs((L2CAgent *)auStack512,(L2CValue *)pppvVar10);
  lib::L2CValue::operator=((L2CValue *)auStack512,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack544,(L2CValue *)auStack352);
  FUN_7100022d60(param_2,aLStack544);
  lib::L2CValue::~L2CValue(aLStack544);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue((L2CValue *)auStack528,0.0);
  lib::L2CAgent::clear_lua_stack(param_2);
  lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack432);
  lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack528);
  app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
  lib::L2CValue::~L2CValue((L2CValue *)auStack528);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CAgent::clear_lua_stack(param_2);
  lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack448);
  app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue((L2CValue *)auStack528,0.0);
  lib::L2CAgent::clear_lua_stack(param_2);
  lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack464);
  lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack528);
  app::sv_kinetic_energy::set_accel(param_2->luaStateAgent);
  lib::L2CValue::~L2CValue((L2CValue *)auStack528);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CAgent::clear_lua_stack(param_2);
  lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack480);
  app::sv_kinetic_energy::set_accel(param_2->luaStateAgent);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue((L2CValue *)auStack528,0.0);
  lib::L2CValue::L2CValue(aLStack560,0.0);
  lib::L2CAgent::clear_lua_stack(param_2);
  lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack528);
  lib::L2CAgent::push_lua_stack(param_2,aLStack560);
  app::sv_kinetic_energy::set_brake(param_2->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack560);
  lib::L2CValue::~L2CValue((L2CValue *)auStack528);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue((L2CValue *)auStack528,0.0);
  lib::L2CAgent::clear_lua_stack(param_2);
  lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack496);
  lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack528);
  app::sv_kinetic_energy::set_limit_speed(param_2->luaStateAgent);
  lib::L2CValue::~L2CValue((L2CValue *)auStack528);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CAgent::clear_lua_stack(param_2);
  lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack512);
  app::sv_kinetic_energy::set_stable_speed(param_2->luaStateAgent);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  fVar12 = (float)lib::L2CValue::as_number((L2CValue *)(auStack288 + 0x10));
  fVar13 = (float)lib::L2CValue::as_number((L2CValue *)auStack288);
  fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
  fVar12 = (float)app::sv_math::vec3_length(fVar12,fVar13,fVar14);
  lib::L2CValue::L2CValue((L2CValue *)auStack528,fVar12);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack560,6.0);
  lib::L2CValue::L2CValue(aLStack576,_FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLAG_EAT_ESA_TOP);
  iVar3 = lib::L2CValue::as_integer(aLStack576);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue(aLStack576);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,4.0);
    lib::L2CValue::operator=(aLStack560,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  }
  uVar6 = lib::L2CValue::operator<=((L2CValue *)auStack528,aLStack560);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack592,_GROUND_TOUCH_FLAG_ALL);
    uVar15 = lib::L2CValue::as_integer(aLStack592);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar11,uVar15);
    lib::L2CValue::L2CValue(aLStack576,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
    uVar6 = lib::L2CValue::operator==(aLStack576,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue(aLStack576);
    lib::L2CValue::~L2CValue(aLStack592);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack608,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack624,0x10bcd7e7e1);
      uVar6 = lib::L2CValue::as_integer(aLStack608);
      uVar8 = lib::L2CValue::as_integer(aLStack624);
      fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack592,fVar12);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,-0.85);
      lib::L2CValue::operator*((L2CValue *)&local_60,aLStack592);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      uVar6 = lib::L2CValue::operator<=((L2CValue *)auStack448,aLStack576);
      lib::L2CValue::~L2CValue(aLStack576);
      lib::L2CValue::~L2CValue(aLStack592);
      lib::L2CValue::~L2CValue(aLStack624);
      lib::L2CValue::~L2CValue(aLStack608);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack576,_FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_INT_EAT_ESA_INDEX);
        iVar3 = lib::L2CValue::as_integer(aLStack576);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
        lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::~L2CValue(aLStack576);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,1);
        lib::L2CValue::operator+(aLStack160,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::operator=(aLStack160,aLStack576);
        lib::L2CValue::~L2CValue(aLStack576);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_PACMAN_SPECIAL_S_PUT_ESA_NUM);
        uVar6 = lib::L2CValue::operator<(aLStack160,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_60,_FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLAG_EAT_ESA_TOP);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar3);
        }
        else {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_60,_FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_INT_EAT_ESA_INDEX);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
          app::lua_bind::WorkModule__inc_int_impl(*ppBVar11,iVar3);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_60,
                     _FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_SPECIAL_S_EFFECT_HANDLE0);
          lib::L2CValue::operator+((L2CValue *)&local_60,aLStack160);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          iVar3 = lib::L2CValue::as_integer(aLStack592);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar3);
          lib::L2CValue::L2CValue(aLStack576,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,_PACMAN_SPECIAL_S_EFFECT_INVALID);
          uVar6 = lib::L2CValue::operator==(aLStack576,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::~L2CValue(aLStack576);
          lib::L2CValue::~L2CValue(aLStack592);
          if ((uVar6 & 1) == 0) goto LAB_7100029d90;
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_60,_FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLAG_EAT_ESA_TOP);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar3);
        }
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      }
LAB_7100029d90:
      lib::L2CValue::L2CValue(aLStack592,GROUND_TOUCH_FLAG_DOWN);
      uVar15 = lib::L2CValue::as_integer(aLStack592);
      bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar11,uVar15);
      lib::L2CValue::L2CValue(aLStack576,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
      uVar6 = lib::L2CValue::operator==(aLStack576,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue(aLStack576);
      lib::L2CValue::~L2CValue(aLStack592);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0x232b22244b);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_60);
        app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
        lib::L2CAgent::pop_lua_stack(param_2,1);
        lib::L2CValue::~L2CValue(aLStack752);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_CAMERA_QUAKE_KIND_SMALL);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        app::lua_bind::CameraModule__req_quake_impl(*ppBVar11,iVar3);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue(aLStack576,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack592,0xf188f88aa);
        uVar6 = lib::L2CValue::as_integer(aLStack576);
        uVar8 = lib::L2CValue::as_integer(aLStack592);
        fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar6,uVar8);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar12);
        lib::L2CValue::operator=((L2CValue *)auStack448,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::~L2CValue(aLStack592);
        lib::L2CValue::~L2CValue(aLStack576);
        lib::L2CValue::L2CValue(aLStack576,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
        iVar3 = lib::L2CValue::as_integer(aLStack576);
        fVar12 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar11,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar12);
        lib::L2CValue::operator=((L2CValue *)auStack432,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::~L2CValue(aLStack576);
        lib::L2CValue::L2CValue(aLStack592,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack608,0x11fb31fe6d);
        uVar6 = lib::L2CValue::as_integer(aLStack592);
        uVar8 = lib::L2CValue::as_integer(aLStack608);
        fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar6,uVar8);
        lib::L2CValue::L2CValue(aLStack576,fVar12);
        lib::L2CValue::operator*((L2CValue *)auStack432,aLStack576);
        lib::L2CValue::operator=((L2CValue *)auStack432,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::~L2CValue(aLStack576);
        lib::L2CValue::~L2CValue(aLStack608);
        lib::L2CValue::~L2CValue(aLStack592);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        lib::L2CValue::L2CValue(aLStack576,0.0);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_60);
        lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack432);
        lib::L2CAgent::push_lua_stack(param_2,aLStack576);
        app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack576);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_60);
        lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack448);
        app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        lib::L2CValue::L2CValue(aLStack576,0.0);
        lib::L2CValue::L2CValue(aLStack592,0.0);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_60);
        lib::L2CAgent::push_lua_stack(param_2,aLStack576);
        lib::L2CAgent::push_lua_stack(param_2,aLStack592);
        app::sv_kinetic_energy::set_accel(param_2->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack592);
        lib::L2CValue::~L2CValue(aLStack576);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CValue::L2CValue(aLStack576,0.0);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_60);
        lib::L2CAgent::push_lua_stack(param_2,aLStack576);
        app::sv_kinetic_energy::set_accel(param_2->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack576);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        app::lua_bind::AttackModule__clear_all_impl(*ppBVar11);
        lib::L2CValue::L2CValue(aLStack768,_FIGHTER_PACMAN_STATUS_KIND_SPECIAL_S_REFLECT_FALL);
        lib::L2CValue::L2CValue(aLStack784,false);
        lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x0,(L2CValue)0xf0);
        lib::L2CValue::~L2CValue(aLStack784);
        lib::L2CValue::~L2CValue(aLStack768);
        lib::L2CValue::L2CValue(param_1,1);
        goto LAB_710002a170;
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack576,_FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLAG_EAT_ESA_TOP);
    iVar3 = lib::L2CValue::as_integer(aLStack576);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue(aLStack576);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack624,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack640,0x8afaa2d47);
      uVar6 = lib::L2CValue::as_integer(aLStack624);
      uVar8 = lib::L2CValue::as_integer(aLStack640);
      fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack608,fVar12);
      lib::L2CValue::operator*(aLStack608,aLStack224);
      lib::L2CValue::operator-(aLStack256,aLStack592);
      uVar6 = lib::L2CValue::as_number(aLStack240);
      lVar16 = lib::L2CValue::as_number(aLStack576);
      uVar15 = lib::L2CValue::as_number(aLStack208);
      local_60 = (void **)(uVar6 & 0xffffffff | lVar16 << 0x20);
      plStack88 = (lua_State *)(ulong)uVar15;
      app::lua_bind::PostureModule__set_pos_impl(*ppBVar11,(Vector3f *)&local_60);
      lib::L2CValue::~L2CValue(aLStack576);
      lib::L2CValue::~L2CValue(aLStack592);
      lib::L2CValue::~L2CValue(aLStack608);
      lib::L2CValue::~L2CValue(aLStack640);
      lib::L2CValue::~L2CValue(aLStack624);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x29c7b4395f);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_60);
      app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_2,1);
      lib::L2CValue::~L2CValue(aLStack656);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue
                (aLStack592,_FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLAG_IS_POWER_ESA_GROUND);
      iVar3 = lib::L2CValue::as_integer(aLStack592);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue(aLStack576,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
      uVar6 = lib::L2CValue::operator==(aLStack576,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue(aLStack576);
      lib::L2CValue::~L2CValue(aLStack592);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        lib::L2CValue::L2CValue(aLStack576,0.0);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_60);
        lib::L2CAgent::push_lua_stack(param_2,aLStack112);
        lib::L2CAgent::push_lua_stack(param_2,aLStack576);
        app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack576);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_60);
        lib::L2CAgent::push_lua_stack(param_2,aLStack128);
        app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,GROUND_CORRECT_KIND_GROUND);
        GVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        app::lua_bind::GroundModule__correct_impl(*ppBVar11,GVar4);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue(aLStack672,_SITUATION_KIND_GROUND);
        lua2cpp::L2CFighterBase::set_situation(param_2,(L2CValue)0x60);
        lib::L2CValue::~L2CValue(aLStack672);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        fVar12 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar11);
        lib::L2CValue::L2CValue(aLStack592,fVar12);
        lib::L2CValue::operator*(aLStack144,aLStack592);
        lib::L2CValue::L2CValue(aLStack608,0.0);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_60);
        lib::L2CAgent::push_lua_stack(param_2,aLStack576);
        lib::L2CAgent::push_lua_stack(param_2,aLStack608);
        app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack608);
        lib::L2CValue::~L2CValue(aLStack576);
        lib::L2CValue::~L2CValue(aLStack592);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CValue::L2CValue(aLStack576,0.0);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_60);
        lib::L2CAgent::push_lua_stack(param_2,aLStack576);
        app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack576);
      }
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLAG_EAT_POWER_ESA);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PACMAN_GENERATE_ARTICLE_ESA);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::ArticleModule__remove_exist_impl(*ppBVar11,iVar3,0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x27d0d7e487);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_60);
      app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_2,1);
      lib::L2CValue::~L2CValue(aLStack688);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue(aLStack704,_FIGHTER_PACMAN_STATUS_KIND_SPECIAL_S_DASH);
      lib::L2CValue::L2CValue(aLStack720,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x40,(L2CValue)0x30);
      lib::L2CValue::~L2CValue(aLStack720);
      lib::L2CValue::~L2CValue(aLStack704);
      lib::L2CValue::L2CValue(param_1,1);
      goto LAB_710002a170;
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_SPECIAL_S_EFFECT_HANDLE0);
    lib::L2CValue::operator+((L2CValue *)&local_60,aLStack160);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    iVar3 = lib::L2CValue::as_integer(aLStack592);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue(aLStack576,iVar3);
    lib::L2CValue::~L2CValue(aLStack592);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_PACMAN_SPECIAL_S_EFFECT_INVALID);
    uVar6 = lib::L2CValue::operator==(aLStack576,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_MA_MSC_EFFECT_REMOVE);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_60);
      lib::L2CAgent::push_lua_stack(param_2,aLStack576);
      app::sv_module_access::effect(param_2->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_2,1);
      lib::L2CValue::~L2CValue(aLStack736);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    }
    lib::L2CValue::L2CValue(aLStack592,_PACMAN_SPECIAL_S_EFFECT_INVALID);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_SPECIAL_S_EFFECT_HANDLE0);
    lib::L2CValue::operator+((L2CValue *)&local_60,aLStack160);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    iVar3 = lib::L2CValue::as_integer(aLStack592);
    iVar5 = lib::L2CValue::as_integer(aLStack608);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar11,iVar3,iVar5);
    lib::L2CValue::~L2CValue(aLStack608);
    lib::L2CValue::~L2CValue(aLStack592);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,1);
    lib::L2CValue::operator+(aLStack160,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::operator=(aLStack160,aLStack592);
    lib::L2CValue::~L2CValue(aLStack592);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_PACMAN_SPECIAL_S_PUT_ESA_NUM);
    uVar6 = lib::L2CValue::operator<(aLStack160,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLAG_EAT_ESA_TOP);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar3);
LAB_7100029bc0:
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    }
    else {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_INT_EAT_ESA_INDEX);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar11,iVar3,iVar5);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_SPECIAL_S_EFFECT_HANDLE0
                );
      lib::L2CValue::operator+((L2CValue *)&local_60,aLStack160);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      iVar3 = lib::L2CValue::as_integer(aLStack608);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue(aLStack592,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_PACMAN_SPECIAL_S_EFFECT_INVALID);
      uVar6 = lib::L2CValue::operator==(aLStack592,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue(aLStack592);
      lib::L2CValue::~L2CValue(aLStack608);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_60,_FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLAG_EAT_ESA_TOP);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar3);
        goto LAB_7100029bc0;
      }
    }
    lib::L2CValue::~L2CValue(aLStack576);
  }
  lib::L2CValue::L2CValue(param_1,0);
LAB_710002a170:
  lib::L2CValue::~L2CValue(aLStack560);
  lib::L2CValue::~L2CValue((L2CValue *)auStack528);
  lib::L2CValue::~L2CValue((L2CValue *)auStack512);
  lib::L2CValue::~L2CValue((L2CValue *)auStack496);
  lib::L2CValue::~L2CValue((L2CValue *)auStack480);
  lib::L2CValue::~L2CValue((L2CValue *)auStack464);
  lib::L2CValue::~L2CValue((L2CValue *)auStack448);
  lib::L2CValue::~L2CValue((L2CValue *)auStack432);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack432 + 0x10));
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue((L2CValue *)auStack352);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack352 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack320);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack320 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack288);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
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

