
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000215e0(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  Hash40 HVar8;
  L2CValue *pLVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  long lVar15;
  undefined8 uVar16;
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
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
  ulong local_110;
  ulong uStack264;
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined auStack176 [32];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  Hash40MapEntry **local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack336,0);
  lib::L2CValue::L2CValue(aLStack352,0);
  lib::L2CValue::L2CValue(aLStack368,0);
  lib::L2CValue::L2CValue(aLStack384,0);
  lib::L2CValue::L2CValue(aLStack400,0);
  lib::L2CValue::L2CValue(aLStack416,0);
  lib::L2CValue::L2CValue(aLStack432,0);
  lib::L2CValue::L2CValue(aLStack448,0);
  lib::L2CValue::L2CValue(aLStack464,0);
  lib::L2CValue::L2CValue(aLStack480,0);
  lib::L2CValue::L2CValue(aLStack496,0);
  lib::L2CValue::L2CValue(aLStack512,0);
  lib::L2CValue::L2CValue(aLStack528,0);
  lib::L2CValue::L2CValue(aLStack544,0);
  lib::L2CValue::L2CValue(aLStack560,0);
  lib::L2CValue::L2CValue(aLStack576,0);
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_INT_HIT_INVALID_FRAME)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    ppBVar10 = &param_2->moduleAccessor;
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_110,0);
    uVar5 = lib::L2CValue::operator<((L2CValue *)&local_60,(L2CValue *)&local_110);
    lib::L2CValue::~L2CValue((L2CValue *)&local_110);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_110,true);
      bVar2 = lib::L2CValue::as_bool((L2CValue *)&local_110);
      app::lua_bind::HitModule__sleep_impl(*ppBVar10,(bool)(bVar2 & 1));
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_110,false);
      bVar2 = lib::L2CValue::as_bool((L2CValue *)&local_110);
      app::lua_bind::HitModule__sleep_impl(*ppBVar10,(bool)(bVar2 & 1));
    }
    lib::L2CValue::~L2CValue((L2CValue *)&local_110);
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_INT_RESTORE_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_110,0);
    uVar5 = lib::L2CValue::operator<=((L2CValue *)&local_110,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_110);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_110,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_INT_RESTORE_COUNT);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_110);
      app::lua_bind::WorkModule__inc_int_impl(*ppBVar10,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)&local_110);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_INT_RESTORE_COUNT);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_110,iVar3);
      lib::L2CValue::operator=(aLStack544,(L2CValue *)&local_110);
      lib::L2CValue::~L2CValue((L2CValue *)&local_110);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::operator=(aLStack512,aLStack544);
      lib::L2CValue::L2CValue((L2CValue *)&local_110,0x1e);
      lib::L2CValue::operator/(aLStack512,(L2CValue *)&local_110);
      lib::L2CValue::~L2CValue((L2CValue *)&local_110);
      lib::L2CValue::operator=(aLStack368,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_110,1.0);
      lib::L2CValue::operator-((L2CValue *)&local_110,aLStack368);
      lib::L2CValue::~L2CValue((L2CValue *)&local_110);
      lib::L2CValue::operator=(aLStack480,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue(aLStack128,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLOAT_TARGET_ROT_X);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack112,fVar11);
      lib::L2CValue::operator*(aLStack368,aLStack112);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack176,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLOAT_ORIGINAL_ROT_X)
      ;
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack176);
      fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),fVar11);
      lib::L2CValue::operator*(aLStack480,(L2CValue *)(auStack176 + 0x10));
      lib::L2CValue::operator+((L2CValue *)&local_60,aLStack144);
      lib::L2CValue::operator=(aLStack400,(L2CValue *)&local_110);
      lib::L2CValue::~L2CValue((L2CValue *)&local_110);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack176 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)auStack176);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack128,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLOAT_TARGET_ROT_Y);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack112,fVar11);
      lib::L2CValue::operator*(aLStack368,aLStack112);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack176,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLOAT_ORIGINAL_ROT_Y)
      ;
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack176);
      fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),fVar11);
      lib::L2CValue::operator*(aLStack480,(L2CValue *)(auStack176 + 0x10));
      lib::L2CValue::operator+((L2CValue *)&local_60,aLStack144);
      lib::L2CValue::operator=(aLStack496,(L2CValue *)&local_110);
      lib::L2CValue::~L2CValue((L2CValue *)&local_110);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack176 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)auStack176);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack128,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLOAT_TARGET_ROT_Z);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack112,fVar11);
      lib::L2CValue::operator*(aLStack368,aLStack112);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack176,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLOAT_ORIGINAL_ROT_Z)
      ;
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack176);
      fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),fVar11);
      lib::L2CValue::operator*(aLStack480,(L2CValue *)(auStack176 + 0x10));
      lib::L2CValue::operator+((L2CValue *)&local_60,aLStack144);
      lib::L2CValue::operator=(aLStack528,(L2CValue *)&local_110);
      lib::L2CValue::~L2CValue((L2CValue *)&local_110);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack176 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)auStack176);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      uVar5 = lib::L2CValue::as_number(aLStack400);
      lVar15 = lib::L2CValue::as_number(aLStack496);
      uVar12 = lib::L2CValue::as_number(aLStack528);
      local_110 = uVar5 & 0xffffffff | lVar15 << 0x20;
      uStack264 = (ulong)uVar12;
      app::lua_bind::PostureModule__set_rot_impl(*ppBVar10,(Vector3f *)&local_110,0);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_110,fVar11);
    lib::L2CValue::operator=(aLStack384,(L2CValue *)&local_110);
    lib::L2CValue::~L2CValue((L2CValue *)&local_110);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_110,fVar11);
    lib::L2CValue::operator=(aLStack576,(L2CValue *)&local_110);
    lib::L2CValue::~L2CValue((L2CValue *)&local_110);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
    lib::L2CValue::L2CValue((L2CValue *)&local_110,fVar11);
    lib::L2CValue::operator=(aLStack336,(L2CValue *)&local_110);
    lib::L2CValue::~L2CValue((L2CValue *)&local_110);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLAG_IS_ADD_ACCEL_Y);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_110,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_110);
    lib::L2CValue::~L2CValue((L2CValue *)&local_110);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_110,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLOAT_ACCEL_Y);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_110);
      fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar11);
      lib::L2CValue::~L2CValue((L2CValue *)&local_110);
      lib::L2CValue::L2CValue(aLStack128,0xaae2714fc);
      lib::L2CValue::L2CValue(aLStack144,0x10e103df9f);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      uVar6 = lib::L2CValue::as_integer(aLStack144);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack112,fVar11);
      lib::L2CValue::operator-((L2CValue *)&local_60,aLStack112);
      lib::L2CValue::operator=((L2CValue *)&local_60,(L2CValue *)&local_110);
      lib::L2CValue::~L2CValue((L2CValue *)&local_110);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::L2CValue((L2CValue *)&local_110,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_110);
      lib::L2CAgent::push_lua_stack(param_2,aLStack112);
      lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_60);
      app::sv_kinetic_energy::set_accel(param_2->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue((L2CValue *)&local_110);
      lib::L2CValue::L2CValue((L2CValue *)&local_110,0.0);
      lib::L2CValue::operator+((L2CValue *)&local_60,(L2CValue *)&local_110);
      lib::L2CValue::~L2CValue((L2CValue *)&local_110);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_110,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLOAT_ACCEL_Y);
      fVar11 = (float)lib::L2CValue::as_number(aLStack112);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_110);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)&local_110);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_110,fVar11);
    lib::L2CValue::operator=(aLStack576,(L2CValue *)&local_110);
    lib::L2CValue::~L2CValue((L2CValue *)&local_110);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue(aLStack112,0xaae2714fc);
    lib::L2CValue::L2CValue(aLStack128,0x10b3946eb3);
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    uVar6 = lib::L2CValue::as_integer(aLStack128);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar11);
    lib::L2CValue::operator-((L2CValue *)&local_60);
    lib::L2CValue::operator=(aLStack560,(L2CValue *)&local_110);
    lib::L2CValue::~L2CValue((L2CValue *)&local_110);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    uVar5 = lib::L2CValue::operator<(aLStack576,aLStack560);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_110,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CValue::L2CValue(aLStack112,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar11);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_110);
      lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_60);
      lib::L2CAgent::push_lua_stack(param_2,aLStack560);
      app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue((L2CValue *)&local_110);
      lib::L2CValue::L2CValue((L2CValue *)&local_110,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_110);
      lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_60);
      lib::L2CAgent::push_lua_stack(param_2,aLStack112);
      app::sv_kinetic_energy::set_accel(param_2->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_110);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_GROUND_TOUCH_FLAG_ALL);
    uVar12 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    bVar2 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar10,uVar12);
    lib::L2CValue::L2CValue((L2CValue *)&local_110,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_110);
    lib::L2CValue::~L2CValue((L2CValue *)&local_110);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,GROUND_TOUCH_FLAG_DOWN);
      uVar12 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      bVar2 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar10,uVar12);
      lib::L2CValue::L2CValue((L2CValue *)&local_110,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_110);
      if ((bVar1 & 1U) == 0) {
LAB_7100022190:
        lib::L2CValue::~L2CValue((L2CValue *)&local_110);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLAG_IS_REFLECTED)
        ;
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack128);
          goto LAB_7100022190;
        }
        lib::L2CValue::L2CValue
                  ((L2CValue *)(auStack176 + 0x10),
                   _WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLAG_IS_TAKENOUT);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack176 + 0x10));
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack144);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack176 + 0x10));
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue((L2CValue *)&local_110);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        if ((bVar1 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack592,GROUND_TOUCH_FLAG_DOWN);
          lib::L2CValue::L2CValue(aLStack608,aLStack384);
          lib::L2CValue::L2CValue(aLStack624,aLStack576);
          lib::L2CValue::L2CValue(aLStack128,0);
          lib::L2CValue::L2CValue(aLStack144,0);
          lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),0);
          lib::L2CValue::L2CValue((L2CValue *)auStack176,0);
          lib::L2CValue::L2CValue(aLStack192,0);
          lib::L2CValue::L2CValue(aLStack208,0);
          lib::L2CValue::L2CValue(aLStack224,0);
          fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
          lib::L2CValue::L2CValue((L2CValue *)&local_110,fVar11);
          lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_110);
          lib::L2CValue::~L2CValue((L2CValue *)&local_110);
          uVar12 = lib::L2CValue::as_integer(aLStack592);
          uVar16 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar10,uVar12);
          lib::L2CValue::L2CValue((L2CValue *)&local_110,(float)uVar16);
          lib::L2CValue::L2CValue(aLStack256,(float)((ulong)uVar16 >> 0x20));
          lib::L2CValue::L2CValue((L2CValue *)&local_60,(L2CValue *)&local_110);
          lib::L2CValue::L2CValue(aLStack112,aLStack256);
          pLVar9 = aLStack112;
          lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0xa0,SUB81(pLVar9,0));
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::~L2CValue(aLStack256);
          lib::L2CValue::~L2CValue((L2CValue *)&local_110);
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
          lib::L2CValue::operator=((L2CValue *)auStack176,pLVar7);
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x1fbdb2615);
          lib::L2CValue::operator=(aLStack192,pLVar7);
          lib::L2CAgent::math_atan((L2CAgent *)auStack176,aLStack192,pLVar9);
          pLVar7 = aLStack128;
          lib::L2CValue::operator*(aLStack288,pLVar7);
          lib::L2CAgent::math_deg((L2CAgent *)aLStack112,pLVar7);
          lib::L2CValue::operator=(aLStack224,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack288);
          lib::L2CValue::L2CValue(aLStack112,_FL_MA_MSC_SLOPE_GET_TOP_ANGLE);
          lib::L2CAgent::clear_lua_stack(param_2);
          lib::L2CAgent::push_lua_stack(param_2,aLStack112);
          app::FL_sv_module_access::slope(param_2->luaStateAgent);
          lib::L2CAgent::pop_lua_stack(param_2,1);
          lib::L2CValue::operator=(aLStack208,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::operator*(aLStack128,aLStack208);
          lib::L2CValue::operator-(aLStack224,aLStack112);
          lib::L2CValue::operator=(aLStack224,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::L2CValue
                    (aLStack288,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_INT_RESTORE_COUNT);
          iVar3 = lib::L2CValue::as_integer(aLStack288);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
          lib::L2CValue::L2CValue(aLStack112,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
          uVar5 = lib::L2CValue::operator<(aLStack112,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack288);
          if ((uVar5 & 1) == 0) {
            fVar11 = (float)app::lua_bind::PostureModule__rot_x_impl(*ppBVar10,0);
            lib::L2CValue::L2CValue(aLStack288,fVar11);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
            lib::L2CValue::operator+(aLStack288,(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_60,
                       _WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLOAT_ORIGINAL_ROT_X);
            fVar11 = (float)lib::L2CValue::as_number(aLStack112);
            iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
            app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue(aLStack288);
            fVar11 = (float)app::lua_bind::PostureModule__rot_y_impl(*ppBVar10,0);
            lib::L2CValue::L2CValue(aLStack288,fVar11);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
            lib::L2CValue::operator+(aLStack288,(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_60,
                       _WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLOAT_ORIGINAL_ROT_Y);
            fVar11 = (float)lib::L2CValue::as_number(aLStack112);
            iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
            app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue(aLStack288);
            fVar11 = (float)app::lua_bind::PostureModule__rot_z_impl(*ppBVar10,0);
            lib::L2CValue::L2CValue(aLStack288,fVar11);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
            lib::L2CValue::operator+(aLStack288,(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_60,
                       _WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLOAT_ORIGINAL_ROT_Z);
            fVar11 = (float)lib::L2CValue::as_number(aLStack112);
            iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
            app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue(aLStack288);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
            lib::L2CValue::operator+(aLStack224,(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_60,
                       _WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLOAT_TARGET_ROT_X);
            fVar11 = (float)lib::L2CValue::as_number(aLStack112);
            iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
            app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
            lib::L2CValue::L2CValue
                      (aLStack112,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLOAT_TARGET_ROT_Y);
            fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
            lib::L2CValue::L2CValue
                      (aLStack112,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLOAT_TARGET_ROT_Z);
            fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,-5.0);
            lib::L2CValue::L2CValue
                      (aLStack112,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLOAT_ORIGINAL_ROT_X);
            fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
            lib::L2CValue::L2CValue
                      (aLStack112,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLOAT_ORIGINAL_ROT_Y);
            fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
            lib::L2CValue::L2CValue
                      (aLStack112,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLOAT_ORIGINAL_ROT_Z);
            fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
            lib::L2CValue::operator+(aLStack224,(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_60,
                       _WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLOAT_TARGET_ROT_X);
            fVar11 = (float)lib::L2CValue::as_number(aLStack112);
            iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
            app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
            lib::L2CValue::L2CValue
                      (aLStack112,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLOAT_TARGET_ROT_Y);
            fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
            lib::L2CValue::L2CValue
                      (aLStack112,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLOAT_TARGET_ROT_Z);
            fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
          }
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
          lib::L2CValue::L2CValue
                    (aLStack112,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_INT_RESTORE_COUNT);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
          iVar4 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar4);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0.3);
          lib::L2CValue::operator=((L2CValue *)(auStack176 + 0x10),(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::operator*(aLStack608,(L2CValue *)auStack176);
          lib::L2CValue::operator*(aLStack624,aLStack192);
          lib::L2CValue::operator+(aLStack304,aLStack320);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,2.0);
          lib::L2CValue::operator*(aLStack288,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::operator=(aLStack144,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack288);
          lib::L2CValue::~L2CValue(aLStack320);
          lib::L2CValue::~L2CValue(aLStack304);
          lib::L2CValue::operator*(aLStack144,(L2CValue *)auStack176);
          lib::L2CValue::operator-(aLStack608,aLStack112);
          lib::L2CValue::operator=(aLStack608,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::operator*(aLStack608,(L2CValue *)(auStack176 + 0x10));
          lib::L2CValue::operator=(aLStack608,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::operator*(aLStack144,aLStack192);
          lib::L2CValue::operator-(aLStack624,aLStack112);
          lib::L2CValue::operator=(aLStack624,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::operator*(aLStack624,(L2CValue *)(auStack176 + 0x10));
          lib::L2CValue::operator=(aLStack624,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KINETIC_TYPE_NORMAL);
          lib::L2CAgent::clear_lua_stack(param_2);
          lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_60);
          lib::L2CAgent::push_lua_stack(param_2,aLStack608);
          lib::L2CAgent::push_lua_stack(param_2,aLStack624);
          app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack224);
          lib::L2CValue::~L2CValue(aLStack208);
          lib::L2CValue::~L2CValue(aLStack192);
          lib::L2CValue::~L2CValue((L2CValue *)auStack176);
          lib::L2CValue::~L2CValue((L2CValue *)(auStack176 + 0x10));
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack624);
          lib::L2CValue::~L2CValue(aLStack608);
          lib::L2CValue::~L2CValue(aLStack592);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_110,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLAG_IS_FLOOR_HIT
                    );
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_110);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
          lib::L2CValue::~L2CValue((L2CValue *)&local_110);
          goto LAB_7100022c38;
        }
      }
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_110,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLAG_IS_WALL_HIT);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_110);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)&local_110);
      lib::L2CValue::L2CValue(aLStack640,_WEAPON_DUCKHUNT_CLAY_STATUS_KIND_HIT);
      lib::L2CValue::L2CValue(aLStack656,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x80,(L2CValue)0x70);
      lib::L2CValue::~L2CValue(aLStack656);
      lib::L2CValue::~L2CValue(aLStack640);
      lib::L2CValue::L2CValue(param_1,0);
      goto LAB_71000230e8;
    }
LAB_7100022c38:
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    bVar2 = app::lua_bind::AttackModule__is_attack_impl(*ppBVar10,iVar3,false);
    lib::L2CValue::L2CValue((L2CValue *)&local_110,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_110);
    lib::L2CValue::~L2CValue((L2CValue *)&local_110);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar11);
      lib::L2CValue::L2CValue(aLStack144,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack128,fVar11);
      lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),0.0);
      fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
      fVar13 = (float)lib::L2CValue::as_number(aLStack128);
      fVar14 = (float)lib::L2CValue::as_number((L2CValue *)(auStack176 + 0x10));
      fVar11 = (float)app::sv_math::vec3_length(fVar11,fVar13,fVar14);
      lib::L2CValue::L2CValue((L2CValue *)&local_110,fVar11);
      lib::L2CValue::operator=(aLStack464,(L2CValue *)&local_110);
      lib::L2CValue::~L2CValue((L2CValue *)&local_110);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack176 + 0x10));
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0xaae2714fc);
      lib::L2CValue::L2CValue(aLStack112,0x14412e0c43);
      uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      uVar6 = lib::L2CValue::as_integer(aLStack112);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar6);
      lib::L2CValue::L2CValue((L2CValue *)&local_110,fVar11);
      uVar5 = lib::L2CValue::operator<(aLStack464,(L2CValue *)&local_110);
      lib::L2CValue::~L2CValue((L2CValue *)&local_110);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_110,false);
        bVar2 = lib::L2CValue::as_bool((L2CValue *)&local_110);
        app::lua_bind::AttackModule__sleep_impl(*ppBVar10,(bool)(bVar2 & 1));
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_110,true);
        bVar2 = lib::L2CValue::as_bool((L2CValue *)&local_110);
        app::lua_bind::AttackModule__sleep_impl(*ppBVar10,(bool)(bVar2 & 1));
      }
      lib::L2CValue::~L2CValue((L2CValue *)&local_110);
    }
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_110,0);
    uVar5 = lib::L2CValue::operator<=((L2CValue *)&local_60,(L2CValue *)&local_110);
    lib::L2CValue::~L2CValue((L2CValue *)&local_110);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      fVar11 = (float)app::lua_bind::PostureModule__pos_x_impl(*ppBVar10);
      lib::L2CValue::L2CValue((L2CValue *)&local_110,fVar11);
      lib::L2CValue::operator=(aLStack352,(L2CValue *)&local_110);
      lib::L2CValue::~L2CValue((L2CValue *)&local_110);
      fVar11 = (float)app::lua_bind::PostureModule__pos_y_impl(*ppBVar10);
      lib::L2CValue::L2CValue((L2CValue *)&local_110,fVar11);
      lib::L2CValue::operator=(aLStack432,(L2CValue *)&local_110);
      lib::L2CValue::~L2CValue((L2CValue *)&local_110);
      fVar11 = (float)app::lua_bind::PostureModule__pos_z_impl(*ppBVar10);
      lib::L2CValue::L2CValue((L2CValue *)&local_110,fVar11);
      lib::L2CValue::operator=(aLStack448,(L2CValue *)&local_110);
      lib::L2CValue::~L2CValue((L2CValue *)&local_110);
      lib::L2CValue::L2CValue(aLStack128,0xfa06bb067);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),0.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack176,0.0);
      lib::L2CValue::L2CValue(aLStack192,1.0);
      lib::L2CValue::L2CValue(aLStack208,0);
      lib::L2CValue::L2CValue(aLStack224,-1);
      HVar8 = lib::L2CValue::as_hash(aLStack128);
      uVar5 = lib::L2CValue::as_number(aLStack352);
      lVar15 = lib::L2CValue::as_number(aLStack432);
      uVar12 = lib::L2CValue::as_number(aLStack448);
      local_110 = uVar5 & 0xffffffff | lVar15 << 0x20;
      uStack264 = (ulong)uVar12;
      uVar5 = lib::L2CValue::as_number(aLStack144);
      lVar15 = lib::L2CValue::as_number((L2CValue *)(auStack176 + 0x10));
      uVar12 = lib::L2CValue::as_number((L2CValue *)auStack176);
      local_60 = (Hash40MapEntry **)(uVar5 & 0xffffffff | lVar15 << 0x20);
      uStack88 = (ulong)uVar12;
      fVar11 = (float)lib::L2CValue::as_number(aLStack192);
      uVar12 = lib::L2CValue::as_integer(aLStack208);
      iVar3 = lib::L2CValue::as_integer(aLStack224);
      uVar12 = app::lua_bind::EffectModule__req_impl
                         (*ppBVar10,HVar8,(Vector3f *)&local_110,(Vector3f *)&local_60,fVar11,uVar12
                          ,iVar3,false,0);
      lib::L2CValue::L2CValue(aLStack112,uVar12);
      lib::L2CValue::operator=(aLStack416,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue((L2CValue *)auStack176);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack176 + 0x10));
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::L2CValue((L2CValue *)&local_110,0x199c462b5d);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_110);
      app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_2,1);
      lib::L2CValue::~L2CValue(aLStack672);
      lib::L2CValue::~L2CValue((L2CValue *)&local_110);
      lib::L2CValue::L2CValue(param_1,0);
      goto LAB_71000230e8;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_INT_HIT_INVALID_FRAME)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_110,0);
    uVar5 = lib::L2CValue::operator<((L2CValue *)&local_60,(L2CValue *)&local_110);
    lib::L2CValue::~L2CValue((L2CValue *)&local_110);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_110,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_INT_HIT_INVALID_FRAME
                );
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_110);
      app::lua_bind::WorkModule__dec_int_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)&local_110);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_110,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_110);
    app::lua_bind::WorkModule__dec_int_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_110);
  }
  lib::L2CValue::L2CValue(param_1,0);
LAB_71000230e8:
  lib::L2CValue::~L2CValue(aLStack576);
  lib::L2CValue::~L2CValue(aLStack560);
  lib::L2CValue::~L2CValue(aLStack544);
  lib::L2CValue::~L2CValue(aLStack528);
  lib::L2CValue::~L2CValue(aLStack512);
  lib::L2CValue::~L2CValue(aLStack496);
  lib::L2CValue::~L2CValue(aLStack480);
  lib::L2CValue::~L2CValue(aLStack464);
  lib::L2CValue::~L2CValue(aLStack448);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::~L2CValue(aLStack416);
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack336);
  return;
}

