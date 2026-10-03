
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100033a50(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  ulong *puVar6;
  L2CValue *pLVar7;
  BattleObjectModuleAccessor **ppBVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  long lVar13;
  undefined8 uVar14;
  ulong local_2a0;
  ulong uStack664;
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  undefined auStack608 [32];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  undefined auStack448 [32];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  undefined auStack336 [16];
  undefined auStack320 [32];
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
  ulong auStack128 [2];
  ulong auStack112 [2];
  ulong auStack96 [2];
  
  pLVar5 = param_3;
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue(aLStack240,0);
  lib::L2CValue::L2CValue(aLStack256,0);
  lib::L2CValue::L2CValue(aLStack272,0);
  lib::L2CValue::L2CValue(aLStack288,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack320 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack320,0);
  lib::L2CValue::L2CValue((L2CValue *)auStack336,0);
  lib::L2CValue::L2CValue(aLStack352,0);
  lib::L2CValue::L2CValue(aLStack368,0);
  lib::L2CValue::L2CValue(aLStack384,0);
  lib::L2CValue::L2CValue(aLStack400,0);
  lib::L2CValue::L2CValue(aLStack416,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack448 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack448,0);
  lib::L2CValue::L2CValue(aLStack464,0);
  lib::L2CValue::L2CValue(aLStack480,0);
  lib::L2CValue::L2CValue(aLStack496,0);
  lib::L2CValue::L2CValue(aLStack512,0);
  lib::L2CValue::L2CValue(aLStack528,0);
  lib::L2CValue::L2CValue(aLStack544,0);
  lib::L2CValue::L2CValue(aLStack560,0);
  lib::L2CValue::L2CValue(aLStack576,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack608 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack608,0);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,false);
  uVar3 = lib::L2CValue::operator==(param_3,(L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(param_1,0);
    goto LAB_7100035640;
  }
  lib::L2CValue::L2CValue((L2CValue *)auStack96,0);
  lib::L2CValue::L2CValue((L2CValue *)auStack112,0);
  lib::L2CValue::L2CValue((L2CValue *)auStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack(param_2);
  lib::L2CAgent::push_lua_stack(param_2,aLStack160);
  fVar9 = (float)app::sv_kinetic_energy::get_speed_x(param_2->luaStateAgent);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,fVar9);
  lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack(param_2);
  lib::L2CAgent::push_lua_stack(param_2,aLStack160);
  fVar9 = (float)app::sv_kinetic_energy::get_speed_y(param_2->luaStateAgent);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,fVar9);
  lib::L2CValue::operator=((L2CValue *)auStack96,(L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue(aLStack160);
  ppBVar8 = &param_2->moduleAccessor;
  fVar9 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,fVar9);
  lib::L2CValue::operator=((L2CValue *)auStack128,(L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::operator*(aLStack144,(L2CValue *)auStack128);
  lib::L2CAgent::math_atan((L2CAgent *)auStack96,aLStack176,pLVar5);
  lib::L2CValue::operator*(aLStack160,(L2CValue *)auStack128);
  puVar6 = &local_2a0;
  lib::L2CValue::operator=((L2CValue *)auStack112,(L2CValue *)puVar6);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CAgent::math_deg((L2CAgent *)auStack112,(L2CValue *)puVar6);
  uVar3 = lib::L2CValue::as_number(aLStack160);
  lVar13 = lib::L2CValue::as_number(aLStack176);
  uVar10 = lib::L2CValue::as_number(aLStack192);
  local_2a0 = uVar3 & 0xffffffff | lVar13 << 0x20;
  uStack664 = (ulong)uVar10;
  app::lua_bind::PostureModule__set_rot_impl(*ppBVar8,(Vector3f *)&local_2a0,0);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue((L2CValue *)auStack128);
  lib::L2CValue::~L2CValue((L2CValue *)auStack112);
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  lib::L2CValue::L2CValue((L2CValue *)auStack96,0x930c3b49b);
  lib::L2CValue::L2CValue((L2CValue *)auStack112,0x10e670c99a);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack96);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack112);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar3,uVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,fVar9);
  lib::L2CValue::operator=((L2CValue *)(auStack608 + 0x10),(L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack112);
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  fVar9 = (float)app::lua_bind::PostureModule__scale_impl(*ppBVar8);
  lib::L2CValue::L2CValue((L2CValue *)auStack128,fVar9);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,10.0);
  lib::L2CValue::operator*((L2CValue *)&local_2a0,(L2CValue *)auStack128);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::operator*((L2CValue *)(auStack608 + 0x10),(L2CValue *)auStack112);
  lib::L2CValue::operator=((L2CValue *)(auStack608 + 0x10),(L2CValue *)auStack96);
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  lib::L2CValue::~L2CValue((L2CValue *)auStack112);
  lib::L2CValue::~L2CValue((L2CValue *)auStack128);
  fVar9 = (float)app::lua_bind::PostureModule__pos_x_impl(*ppBVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,fVar9);
  lib::L2CValue::operator=(aLStack576,(L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  fVar9 = (float)app::lua_bind::PostureModule__pos_y_impl(*ppBVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,fVar9);
  lib::L2CValue::operator=(aLStack544,(L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack96,_WEAPON_PACMAN_ESA_INSTANCE_WORK_ID_FLOAT_PREV_POS_X);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack96);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,fVar9);
  lib::L2CValue::operator=(aLStack208,(L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack96,_WEAPON_PACMAN_ESA_INSTANCE_WORK_ID_FLOAT_PREV_POS_Y);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack96);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,fVar9);
  lib::L2CValue::operator=(aLStack352,(L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  lib::L2CValue::operator-(aLStack576,aLStack208);
  lib::L2CValue::operator=(aLStack560,(L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::operator-(aLStack544,aLStack352);
  lib::L2CValue::operator=(aLStack256,(L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::L2CValue((L2CValue *)auStack96,0.0);
  fVar9 = (float)lib::L2CValue::as_number(aLStack560);
  fVar11 = (float)lib::L2CValue::as_number(aLStack256);
  fVar12 = (float)lib::L2CValue::as_number((L2CValue *)auStack96);
  fVar9 = (float)app::sv_math::vec3_length(fVar9,fVar11,fVar12);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,fVar9);
  lib::L2CValue::operator=(aLStack496,(L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  uVar3 = lib::L2CValue::operator<=((L2CValue *)(auStack608 + 0x10),aLStack496);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)auStack112,_WEAPON_PACMAN_ESA_INSTANCE_WORK_ID_FLAG_STOP);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)auStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,true);
    uVar3 = lib::L2CValue::operator==((L2CValue *)auStack96,(L2CValue *)&local_2a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack96);
    lib::L2CValue::~L2CValue((L2CValue *)auStack112);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack624,_WEAPON_PACMAN_ESA_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack640,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x90,(L2CValue)0x80);
      lib::L2CValue::~L2CValue(aLStack640);
      lib::L2CValue::~L2CValue(aLStack624);
      lib::L2CValue::L2CValue(param_1,1);
      goto LAB_7100035640;
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,_WEAPON_PACMAN_ESA_STATUS_WORK_ID_FLAG_PUT_ESA);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_2a0);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar2);
    lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,0.0);
    lib::L2CValue::operator+(aLStack576,(L2CValue *)&local_2a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_2a0,_WEAPON_PACMAN_ESA_INSTANCE_WORK_ID_FLOAT_PREV_POS_X);
    fVar9 = (float)lib::L2CValue::as_number((L2CValue *)auStack96);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_2a0);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar2);
    lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack96);
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,0.0);
    lib::L2CValue::operator+(aLStack544,(L2CValue *)&local_2a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_2a0,_WEAPON_PACMAN_ESA_INSTANCE_WORK_ID_FLOAT_PREV_POS_Y);
    fVar9 = (float)lib::L2CValue::as_number((L2CValue *)auStack96);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_2a0);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar2);
    lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  }
  fVar9 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,fVar9);
  lib::L2CValue::operator=(aLStack416,(L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::L2CValue((L2CValue *)auStack96,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack96);
  fVar9 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar8,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,fVar9);
  lib::L2CValue::operator=((L2CValue *)(auStack320 + 0x10),(L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  lib::L2CValue::L2CValue((L2CValue *)auStack96,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack96);
  fVar9 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar8,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,fVar9);
  lib::L2CValue::operator=((L2CValue *)auStack448,(L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  lib::L2CValue::operator*((L2CValue *)(auStack320 + 0x10),(L2CValue *)(auStack320 + 0x10));
  lib::L2CValue::operator*((L2CValue *)auStack448,(L2CValue *)auStack448);
  puVar6 = auStack128;
  lib::L2CValue::operator+((L2CValue *)auStack112,(L2CValue *)puVar6);
  lib::L2CAgent::math_sqrt((L2CAgent *)auStack96,(L2CValue *)puVar6);
  lib::L2CValue::operator=(aLStack464,(L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  lib::L2CValue::~L2CValue((L2CValue *)auStack128);
  lib::L2CValue::~L2CValue((L2CValue *)auStack112);
  lib::L2CValue::L2CValue((L2CValue *)auStack96,0x930c3b49b);
  lib::L2CValue::L2CValue((L2CValue *)auStack112,0x55dfc36e5);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack96);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack112);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar3,uVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,fVar9);
  lib::L2CValue::operator=(aLStack512,(L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack112);
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,0.9);
  lib::L2CValue::operator=(aLStack224,(L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::L2CValue((L2CValue *)auStack112,_GROUND_TOUCH_FLAG_UP);
  uVar10 = lib::L2CValue::as_integer((L2CValue *)auStack112);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar8,uVar10);
  lib::L2CValue::L2CValue((L2CValue *)auStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,true);
  uVar3 = lib::L2CValue::operator==((L2CValue *)auStack96,(L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::~L2CValue((L2CValue *)auStack96);
    lib::L2CValue::~L2CValue((L2CValue *)auStack112);
LAB_7100034588:
    lib::L2CValue::L2CValue((L2CValue *)auStack112,GROUND_TOUCH_FLAG_DOWN);
    uVar10 = lib::L2CValue::as_integer((L2CValue *)auStack112);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar8,uVar10);
    lib::L2CValue::L2CValue((L2CValue *)auStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,true);
    uVar3 = lib::L2CValue::operator==((L2CValue *)auStack96,(L2CValue *)&local_2a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::~L2CValue((L2CValue *)auStack96);
      lib::L2CValue::~L2CValue((L2CValue *)auStack112);
    }
    else {
      lib::L2CValue::operator-(aLStack224);
      uVar3 = lib::L2CValue::operator<=((L2CValue *)auStack448,(L2CValue *)&local_2a0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
      lib::L2CValue::~L2CValue((L2CValue *)auStack96);
      lib::L2CValue::~L2CValue((L2CValue *)auStack112);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_2a0,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
        lib::L2CValue::operator*(aLStack464,aLStack416);
        lib::L2CValue::L2CValue((L2CValue *)auStack112,0.0);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_2a0);
        lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack96);
        lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack112);
        app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
        lib::L2CValue::~L2CValue((L2CValue *)auStack112);
        lib::L2CValue::~L2CValue((L2CValue *)auStack96);
        lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
        lib::L2CValue::L2CValue((L2CValue *)&local_2a0,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
        lib::L2CValue::operator*(aLStack512,aLStack416);
        lib::L2CValue::L2CValue((L2CValue *)auStack112,0.0);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_2a0);
        lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack96);
        lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack112);
        app::sv_kinetic_energy::set_accel(param_2->luaStateAgent);
        lib::L2CValue::~L2CValue((L2CValue *)auStack112);
        lib::L2CValue::~L2CValue((L2CValue *)auStack96);
        lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
        lib::L2CValue::L2CValue((L2CValue *)&local_2a0,1.0);
        uVar3 = lib::L2CValue::operator==(aLStack416,(L2CValue *)&local_2a0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
        if ((uVar3 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_2a0,180.0);
          lib::L2CValue::L2CValue
                    ((L2CValue *)auStack96,_WEAPON_PACMAN_ESA_INSTANCE_WORK_ID_FLOAT_ANGLE);
          fVar9 = (float)lib::L2CValue::as_number((L2CValue *)&local_2a0);
          iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack96);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar2);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_2a0,0.0);
          lib::L2CValue::L2CValue
                    ((L2CValue *)auStack96,_WEAPON_PACMAN_ESA_INSTANCE_WORK_ID_FLOAT_ANGLE);
          fVar9 = (float)lib::L2CValue::as_number((L2CValue *)&local_2a0);
          iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack96);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar2);
        }
        goto LAB_7100034b28;
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)auStack112,GROUND_TOUCH_FLAG_RIGHT);
    uVar10 = lib::L2CValue::as_integer((L2CValue *)auStack112);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar8,uVar10);
    lib::L2CValue::L2CValue((L2CValue *)auStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,true);
    uVar3 = lib::L2CValue::operator==((L2CValue *)auStack96,(L2CValue *)&local_2a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::~L2CValue((L2CValue *)auStack96);
      lib::L2CValue::~L2CValue((L2CValue *)auStack112);
    }
    else {
      uVar3 = lib::L2CValue::operator<=(aLStack224,(L2CValue *)(auStack320 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)auStack96);
      lib::L2CValue::~L2CValue((L2CValue *)auStack112);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_2a0,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
        lib::L2CValue::L2CValue((L2CValue *)auStack96,0.0);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_2a0);
        lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack96);
        lib::L2CAgent::push_lua_stack(param_2,aLStack464);
        app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
        lib::L2CValue::~L2CValue((L2CValue *)auStack96);
        lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
        lib::L2CValue::L2CValue((L2CValue *)&local_2a0,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
        lib::L2CValue::L2CValue((L2CValue *)auStack96,0.0);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_2a0);
        lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack96);
        lib::L2CAgent::push_lua_stack(param_2,aLStack512);
        app::sv_kinetic_energy::set_accel(param_2->luaStateAgent);
        lib::L2CValue::~L2CValue((L2CValue *)auStack96);
        lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
        lib::L2CValue::L2CValue((L2CValue *)&local_2a0,90.0);
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack96,_WEAPON_PACMAN_ESA_INSTANCE_WORK_ID_FLOAT_ANGLE);
        fVar9 = (float)lib::L2CValue::as_number((L2CValue *)&local_2a0);
        iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack96);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar2);
        goto LAB_7100034b28;
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)auStack112,_GROUND_TOUCH_FLAG_LEFT);
    uVar10 = lib::L2CValue::as_integer((L2CValue *)auStack112);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar8,uVar10);
    lib::L2CValue::L2CValue((L2CValue *)auStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,true);
    uVar3 = lib::L2CValue::operator==((L2CValue *)auStack96,(L2CValue *)&local_2a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::~L2CValue((L2CValue *)auStack96);
      puVar6 = auStack112;
      goto LAB_7100034b34;
    }
    lib::L2CValue::operator-(aLStack224);
    uVar3 = lib::L2CValue::operator<=((L2CValue *)(auStack320 + 0x10),(L2CValue *)&local_2a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack96);
    lib::L2CValue::~L2CValue((L2CValue *)auStack112);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_2a0,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CValue::L2CValue((L2CValue *)auStack96,0.0);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_2a0);
      lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack96);
      lib::L2CAgent::push_lua_stack(param_2,aLStack464);
      app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
      lib::L2CValue::~L2CValue((L2CValue *)auStack96);
      lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
      lib::L2CValue::L2CValue((L2CValue *)&local_2a0,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CValue::L2CValue((L2CValue *)auStack96,0.0);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_2a0);
      lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack96);
      lib::L2CAgent::push_lua_stack(param_2,aLStack512);
      app::sv_kinetic_energy::set_accel(param_2->luaStateAgent);
      lib::L2CValue::~L2CValue((L2CValue *)auStack96);
      lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
      lib::L2CValue::L2CValue((L2CValue *)&local_2a0,90.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack96,_WEAPON_PACMAN_ESA_INSTANCE_WORK_ID_FLOAT_ANGLE)
      ;
      fVar9 = (float)lib::L2CValue::as_number((L2CValue *)&local_2a0);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack96);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar2);
      goto LAB_7100034b28;
    }
  }
  else {
    uVar3 = lib::L2CValue::operator<=(aLStack224,(L2CValue *)auStack448);
    lib::L2CValue::~L2CValue((L2CValue *)auStack96);
    lib::L2CValue::~L2CValue((L2CValue *)auStack112);
    if ((uVar3 & 1) == 0) goto LAB_7100034588;
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CValue::operator*(aLStack464,aLStack416);
    lib::L2CValue::L2CValue((L2CValue *)auStack112,0.0);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_2a0);
    lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack96);
    lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack112);
    app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
    lib::L2CValue::~L2CValue((L2CValue *)auStack112);
    lib::L2CValue::~L2CValue((L2CValue *)auStack96);
    lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CValue::operator*(aLStack512,aLStack416);
    lib::L2CValue::L2CValue((L2CValue *)auStack112,0.0);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_2a0);
    lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack96);
    lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack112);
    app::sv_kinetic_energy::set_accel(param_2->luaStateAgent);
    lib::L2CValue::~L2CValue((L2CValue *)auStack112);
    lib::L2CValue::~L2CValue((L2CValue *)auStack96);
    lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,1.0);
    uVar3 = lib::L2CValue::operator==(aLStack416,(L2CValue *)&local_2a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_2a0,180.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack96,_WEAPON_PACMAN_ESA_INSTANCE_WORK_ID_FLOAT_ANGLE)
      ;
      fVar9 = (float)lib::L2CValue::as_number((L2CValue *)&local_2a0);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack96);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar2);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_2a0,0.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack96,_WEAPON_PACMAN_ESA_INSTANCE_WORK_ID_FLOAT_ANGLE)
      ;
      fVar9 = (float)lib::L2CValue::as_number((L2CValue *)&local_2a0);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack96);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar2);
    }
LAB_7100034b28:
    lib::L2CValue::~L2CValue((L2CValue *)auStack96);
    puVar6 = &local_2a0;
LAB_7100034b34:
    lib::L2CValue::~L2CValue((L2CValue *)puVar6);
  }
  lib::L2CValue::L2CValue((L2CValue *)auStack96,_WEAPON_PACMAN_ESA_INSTANCE_WORK_ID_FLOAT_ANGLE);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack96);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,fVar9);
  lib::L2CValue::operator=((L2CValue *)auStack608,(L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  lib::L2CValue::L2CValue((L2CValue *)auStack96,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack96);
  fVar9 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar8,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,fVar9);
  lib::L2CValue::operator=((L2CValue *)(auStack320 + 0x10),(L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  lib::L2CValue::L2CValue((L2CValue *)auStack96,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack96);
  fVar9 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar8,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,fVar9);
  lib::L2CValue::operator=((L2CValue *)auStack448,(L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  lib::L2CValue::operator*((L2CValue *)(auStack320 + 0x10),(L2CValue *)(auStack320 + 0x10));
  lib::L2CValue::operator*((L2CValue *)auStack448,(L2CValue *)auStack448);
  puVar6 = auStack128;
  lib::L2CValue::operator+((L2CValue *)auStack112,(L2CValue *)puVar6);
  lib::L2CAgent::math_sqrt((L2CAgent *)auStack96,(L2CValue *)puVar6);
  lib::L2CValue::operator=(aLStack464,(L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  lib::L2CValue::~L2CValue((L2CValue *)auStack128);
  lib::L2CValue::~L2CValue((L2CValue *)auStack112);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,1e-05);
  uVar3 = lib::L2CValue::operator<(aLStack464,(L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  if ((uVar3 & 1) != 0) {
    fVar9 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar8);
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,fVar9);
    lib::L2CValue::operator=((L2CValue *)(auStack320 + 0x10),(L2CValue *)&local_2a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,1.0);
    lib::L2CValue::operator=(aLStack464,(L2CValue *)&local_2a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  }
  lib::L2CValue::L2CValue((L2CValue *)auStack96,0x930c3b49b);
  lib::L2CValue::L2CValue((L2CValue *)auStack112,0x55dfc36e5);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack96);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack112);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar3,uVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,fVar9);
  lib::L2CValue::operator=(aLStack512,(L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack112);
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,0.0);
  lib::L2CValue::operator=(aLStack272,(L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  fVar9 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,fVar9);
  lib::L2CValue::operator=((L2CValue *)auStack320,(L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  fVar9 = (float)app::lua_bind::ControlModule__get_stick_y_impl(*ppBVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,fVar9);
  puVar6 = &local_2a0;
  lib::L2CValue::operator=((L2CValue *)auStack336,(L2CValue *)puVar6);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  lib::L2CAgent::math_abs((L2CAgent *)auStack320,(L2CValue *)puVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,0.0);
  puVar6 = auStack96;
  uVar3 = lib::L2CValue::operator<((L2CValue *)&local_2a0,(L2CValue *)puVar6);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  if ((uVar3 & 1) == 0) {
    lib::L2CAgent::math_abs((L2CAgent *)auStack336,(L2CValue *)puVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,0.0);
    uVar3 = lib::L2CValue::operator<((L2CValue *)&local_2a0,(L2CValue *)auStack112);
    lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack112);
    lib::L2CValue::~L2CValue((L2CValue *)auStack96);
    if ((uVar3 & 1) != 0) goto LAB_7100034e44;
  }
  else {
    lib::L2CValue::~L2CValue((L2CValue *)auStack96);
LAB_7100034e44:
    lib::L2CValue::L2CValue((L2CValue *)auStack96,0x930c3b49b);
    lib::L2CValue::L2CValue((L2CValue *)auStack112,0x9bd324fc8);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack96);
    pLVar5 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)auStack112);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar3,(ulong)pLVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,fVar9);
    lib::L2CValue::operator=(aLStack384,(L2CValue *)&local_2a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack112);
    lib::L2CValue::~L2CValue((L2CValue *)auStack96);
    fVar9 = (float)lib::L2CValue::as_number((L2CValue *)auStack320);
    fVar11 = (float)lib::L2CValue::as_number((L2CValue *)auStack336);
    uVar14 = app::sv_math::vec2_normalize(fVar9,fVar11);
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,(float)uVar14);
    lib::L2CValue::L2CValue(aLStack656,(float)((ulong)uVar14 >> 0x20));
    lib::L2CValue::operator=((L2CValue *)auStack320,(L2CValue *)&local_2a0);
    lib::L2CValue::operator=((L2CValue *)auStack336,aLStack656);
    lib::L2CValue::~L2CValue(aLStack656);
    lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
    fVar9 = (float)lib::L2CValue::as_number((L2CValue *)(auStack320 + 0x10));
    fVar11 = (float)lib::L2CValue::as_number((L2CValue *)auStack448);
    uVar14 = app::sv_math::vec2_normalize(fVar9,fVar11);
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,(float)uVar14);
    lib::L2CValue::L2CValue(aLStack656,(float)((ulong)uVar14 >> 0x20));
    lib::L2CValue::operator=((L2CValue *)(auStack320 + 0x10),(L2CValue *)&local_2a0);
    lib::L2CValue::operator=((L2CValue *)auStack448,aLStack656);
    lib::L2CValue::~L2CValue(aLStack656);
    lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
    lib::L2CValue::operator*((L2CValue *)(auStack320 + 0x10),(L2CValue *)auStack320);
    lib::L2CValue::operator*((L2CValue *)auStack448,(L2CValue *)auStack336);
    lib::L2CValue::operator+((L2CValue *)auStack96,(L2CValue *)auStack112);
    lib::L2CValue::operator=(aLStack240,(L2CValue *)&local_2a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack112);
    lib::L2CValue::~L2CValue((L2CValue *)auStack96);
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,0.0);
    lib::L2CValue::operator=(aLStack288,(L2CValue *)&local_2a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,1.0);
    uVar3 = lib::L2CValue::operator<=((L2CValue *)&local_2a0,aLStack240);
    lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_2a0,-1.0);
      uVar3 = lib::L2CValue::operator<=(aLStack240,(L2CValue *)&local_2a0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_2a0,180.0);
        lib::L2CValue::operator=(aLStack288,(L2CValue *)&local_2a0);
        goto LAB_7100035098;
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_2a0,0.0);
      lib::L2CValue::operator=(aLStack288,(L2CValue *)&local_2a0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
      pLVar7 = (L2CValue *)auStack320;
      lib::L2CAgent::math_atan((L2CAgent *)auStack336,pLVar7,pLVar5);
      lib::L2CAgent::math_deg((L2CAgent *)auStack96,pLVar7);
      lib::L2CValue::operator=(aLStack528,(L2CValue *)&local_2a0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
      lib::L2CValue::~L2CValue((L2CValue *)auStack96);
      pLVar7 = (L2CValue *)(auStack320 + 0x10);
      lib::L2CAgent::math_atan((L2CAgent *)auStack448,pLVar7,pLVar5);
      lib::L2CAgent::math_deg((L2CAgent *)auStack96,pLVar7);
      lib::L2CValue::operator=(aLStack368,(L2CValue *)&local_2a0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
      lib::L2CValue::~L2CValue((L2CValue *)auStack96);
      pLVar5 = aLStack368;
      lib::L2CValue::operator-(aLStack528,pLVar5);
      lib::L2CAgent::math_abs((L2CAgent *)auStack96,pLVar5);
      lib::L2CValue::operator=(aLStack288,(L2CValue *)&local_2a0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
      puVar6 = auStack96;
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_2a0,0.0);
      lib::L2CValue::operator=(aLStack288,(L2CValue *)&local_2a0);
LAB_7100035098:
      puVar6 = &local_2a0;
    }
    lib::L2CValue::~L2CValue((L2CValue *)puVar6);
    lib::L2CValue::operator*((L2CValue *)(auStack320 + 0x10),(L2CValue *)auStack336);
    lib::L2CValue::operator*((L2CValue *)auStack448,(L2CValue *)auStack320);
    lib::L2CValue::operator-((L2CValue *)auStack96,(L2CValue *)auStack112);
    lib::L2CValue::operator=(aLStack480,(L2CValue *)&local_2a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack112);
    lib::L2CValue::~L2CValue((L2CValue *)auStack96);
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,45.0);
    uVar3 = lib::L2CValue::operator<=((L2CValue *)&local_2a0,aLStack288);
    lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_2a0,0.0);
      uVar3 = lib::L2CValue::operator<((L2CValue *)&local_2a0,aLStack480);
      lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_2a0,45.0);
        lib::L2CValue::operator/((L2CValue *)&local_2a0,aLStack384);
        lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
        lib::L2CValue::operator/(aLStack288,(L2CValue *)auStack128);
        lib::L2CValue::operator-((L2CValue *)auStack608,(L2CValue *)auStack112);
        lib::L2CValue::operator=((L2CValue *)auStack608,(L2CValue *)auStack96);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_2a0,45.0);
        lib::L2CValue::operator/((L2CValue *)&local_2a0,aLStack384);
        lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
        lib::L2CValue::operator/(aLStack288,(L2CValue *)auStack128);
        lib::L2CValue::operator+((L2CValue *)auStack608,(L2CValue *)auStack112);
        lib::L2CValue::operator=((L2CValue *)auStack608,(L2CValue *)auStack96);
      }
      lib::L2CValue::~L2CValue((L2CValue *)auStack96);
      lib::L2CValue::~L2CValue((L2CValue *)auStack112);
      puVar6 = auStack128;
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_2a0,0.0);
      uVar3 = lib::L2CValue::operator<((L2CValue *)&local_2a0,aLStack480);
      lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::operator-((L2CValue *)auStack608,aLStack384);
        lib::L2CValue::operator=((L2CValue *)auStack608,(L2CValue *)&local_2a0);
      }
      else {
        lib::L2CValue::operator+((L2CValue *)auStack608,aLStack384);
        lib::L2CValue::operator=((L2CValue *)auStack608,(L2CValue *)&local_2a0);
      }
      puVar6 = &local_2a0;
    }
    lib::L2CValue::~L2CValue((L2CValue *)puVar6);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,-360.0);
  uVar3 = lib::L2CValue::operator<((L2CValue *)auStack608,(L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,360.0);
    lib::L2CValue::operator+((L2CValue *)auStack608,(L2CValue *)&local_2a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
    lib::L2CValue::operator=((L2CValue *)auStack608,(L2CValue *)auStack96);
    lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,360.0);
  puVar6 = (ulong *)auStack608;
  uVar3 = lib::L2CValue::operator<((L2CValue *)&local_2a0,(L2CValue *)puVar6);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_2a0,360.0);
    lib::L2CValue::operator-((L2CValue *)auStack608,(L2CValue *)&local_2a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
    puVar6 = auStack96;
    lib::L2CValue::operator=((L2CValue *)auStack608,(L2CValue *)puVar6);
    lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  }
  lib::L2CAgent::math_rad((L2CAgent *)auStack608,(L2CValue *)puVar6);
  lib::L2CAgent::math_cos((L2CAgent *)auStack112,(L2CValue *)puVar6);
  lib::L2CValue::operator*(aLStack464,(L2CValue *)auStack96);
  puVar6 = &local_2a0;
  lib::L2CValue::operator=((L2CValue *)(auStack320 + 0x10),(L2CValue *)puVar6);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  lib::L2CValue::~L2CValue((L2CValue *)auStack112);
  lib::L2CAgent::math_rad((L2CAgent *)auStack608,(L2CValue *)puVar6);
  lib::L2CAgent::math_sin((L2CAgent *)auStack112,(L2CValue *)puVar6);
  lib::L2CValue::operator*(aLStack464,(L2CValue *)auStack96);
  puVar6 = &local_2a0;
  lib::L2CValue::operator=((L2CValue *)auStack448,(L2CValue *)puVar6);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  lib::L2CValue::~L2CValue((L2CValue *)auStack112);
  lib::L2CAgent::math_rad((L2CAgent *)auStack608,(L2CValue *)puVar6);
  lib::L2CAgent::math_cos((L2CAgent *)auStack112,(L2CValue *)puVar6);
  lib::L2CValue::operator*(aLStack512,(L2CValue *)auStack96);
  puVar6 = &local_2a0;
  lib::L2CValue::operator=(aLStack400,(L2CValue *)puVar6);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  lib::L2CValue::~L2CValue((L2CValue *)auStack112);
  lib::L2CAgent::math_rad((L2CAgent *)auStack608,(L2CValue *)puVar6);
  lib::L2CAgent::math_sin((L2CAgent *)auStack112,(L2CValue *)puVar6);
  lib::L2CValue::operator*(aLStack512,(L2CValue *)auStack96);
  lib::L2CValue::operator=((L2CValue *)(auStack448 + 0x10),(L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  lib::L2CValue::~L2CValue((L2CValue *)auStack112);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack(param_2);
  lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_2a0);
  lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)(auStack320 + 0x10));
  lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack448);
  app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack(param_2);
  lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_2a0);
  lib::L2CAgent::push_lua_stack(param_2,aLStack400);
  lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)(auStack448 + 0x10));
  app::sv_kinetic_energy::set_accel(param_2->luaStateAgent);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,0.0);
  lib::L2CValue::operator+((L2CValue *)auStack608,(L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_2a0,_WEAPON_PACMAN_ESA_INSTANCE_WORK_ID_FLOAT_ANGLE);
  fVar9 = (float)lib::L2CValue::as_number((L2CValue *)auStack96);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_2a0);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar2);
  lib::L2CValue::~L2CValue((L2CValue *)&local_2a0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  lib::L2CValue::L2CValue(param_1,0);
LAB_7100035640:
  lib::L2CValue::~L2CValue((L2CValue *)auStack608);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack608 + 0x10));
  lib::L2CValue::~L2CValue(aLStack576);
  lib::L2CValue::~L2CValue(aLStack560);
  lib::L2CValue::~L2CValue(aLStack544);
  lib::L2CValue::~L2CValue(aLStack528);
  lib::L2CValue::~L2CValue(aLStack512);
  lib::L2CValue::~L2CValue(aLStack496);
  lib::L2CValue::~L2CValue(aLStack480);
  lib::L2CValue::~L2CValue(aLStack464);
  lib::L2CValue::~L2CValue((L2CValue *)auStack448);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack448 + 0x10));
  lib::L2CValue::~L2CValue(aLStack416);
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue((L2CValue *)auStack336);
  lib::L2CValue::~L2CValue((L2CValue *)auStack320);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack320 + 0x10));
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  return;
}

