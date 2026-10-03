
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71001c4d20(void *param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  L2CValue *this;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *this_03;
  L2CValue *this_04;
  BattleObjectModuleAccessor *pBVar8;
  Hash40 HVar9;
  ulong uVar10;
  L2CAgent *this_05;
  undefined8 *puVar11;
  uint uVar12;
  float fVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  undefined auStack448 [32];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  undefined auStack384 [32];
  ulong local_160;
  ulong uStack344;
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
  undefined8 local_a0;
  undefined8 uStack152;
  undefined8 local_90;
  ulong uStack136;
  
  lib::L2CValue::L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x30,(L2CValue)0x20);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x0,(L2CValue)0xf0);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
  this = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x1fbdb2615);
  this_00 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_1 + 200),5);
  this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
  this_02 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
  this_03 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
  this_04 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x1fbdb2615);
  pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this_00);
  uVar14 = lib::L2CValue::as_number(this_01);
  uVar12 = lib::L2CValue::as_number(this_02);
  local_90 = uVar14 & 0xffffffff | (ulong)uVar12 << 0x20;
  uStack136 = 0;
  uVar14 = lib::L2CValue::as_number(this_03);
  uVar12 = lib::L2CValue::as_number(this_04);
  local_a0 = uVar14 & 0xffffffff | (ulong)uVar12 << 0x20;
  uStack152 = 0;
  puVar11 = &local_a0;
  uVar12 = app::FighterUtil::get_air_ground_touch_info
                     (pBVar8,(Vector2f *)&local_90,(Vector2f *)puVar11);
  lib::L2CValue::L2CValue((L2CValue *)&local_160,uVar12);
  lib::L2CValue::L2CValue(aLStack336,(float)local_90);
  lib::L2CValue::L2CValue(aLStack320,local_90._4_4_);
  lib::L2CValue::L2CValue(aLStack304,(float)local_a0);
  lib::L2CValue::L2CValue(aLStack288,local_a0._4_4_);
  lib::L2CValue::operator=(aLStack176,(L2CValue *)&local_160);
  lib::L2CValue::operator=(pLVar5,aLStack336);
  lib::L2CValue::operator=(pLVar6,aLStack320);
  lib::L2CValue::operator=(pLVar7,aLStack304);
  lib::L2CValue::operator=(this,aLStack288);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue((L2CValue *)&local_160);
  lib::L2CValue::L2CValue((L2CValue *)&local_160,_GROUND_TOUCH_FLAG_LEFT);
  uVar14 = lib::L2CValue::operator==(aLStack176,(L2CValue *)&local_160);
  lib::L2CValue::~L2CValue((L2CValue *)&local_160);
  if ((uVar14 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_160,GROUND_TOUCH_FLAG_RIGHT);
    uVar14 = lib::L2CValue::operator==(aLStack176,(L2CValue *)&local_160);
    lib::L2CValue::~L2CValue((L2CValue *)&local_160);
    if ((uVar14 & 1) != 0) goto LAB_71001c5044;
    lib::L2CValue::L2CValue((L2CValue *)&local_160,_GROUND_TOUCH_FLAG_SIDE);
    uVar14 = lib::L2CValue::operator==(aLStack176,(L2CValue *)&local_160);
    lib::L2CValue::~L2CValue((L2CValue *)&local_160);
    if ((uVar14 & 1) == 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_160,
                 _GROUND_TOUCH_FLAG_LEFT | GROUND_TOUCH_FLAG_DOWN | GROUND_TOUCH_FLAG_RIGHT);
      uVar14 = lib::L2CValue::operator==(aLStack176,(L2CValue *)&local_160);
      lib::L2CValue::~L2CValue((L2CValue *)&local_160);
      if ((uVar14 & 1) != 0) goto LAB_71001c5750;
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_160,_GROUND_TOUCH_FLAG_LEFT | GROUND_TOUCH_FLAG_DOWN);
      uVar14 = lib::L2CValue::operator==(aLStack176,(L2CValue *)&local_160);
      lib::L2CValue::~L2CValue((L2CValue *)&local_160);
      if ((uVar14 & 1) == 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_160,GROUND_TOUCH_FLAG_RIGHT | GROUND_TOUCH_FLAG_DOWN);
        uVar14 = lib::L2CValue::operator==(aLStack176,(L2CValue *)&local_160);
        lib::L2CValue::~L2CValue((L2CValue *)&local_160);
        if ((uVar14 & 1) == 0) goto LAB_71001c5230;
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x92a3b5b68);
      fVar13 = (float)app::lua_bind::GroundModule__get_z_impl
                                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
      lib::L2CValue::L2CValue((L2CValue *)auStack384,fVar13);
      lib::L2CValue::L2CValue(aLStack400,0.0);
      lib::L2CValue::L2CValue(aLStack416,0.0);
      lib::L2CValue::operator-(param_4);
      lib::L2CAgent::math_atan((L2CAgent *)auStack448,param_5,(L2CValue *)puVar11);
      HVar9 = lib::L2CValue::as_hash((L2CValue *)&local_a0);
      uVar14 = lib::L2CValue::as_number(param_2);
      lVar15 = lib::L2CValue::as_number(param_3);
      uVar12 = lib::L2CValue::as_number((L2CValue *)auStack384);
      local_160 = uVar14 & 0xffffffff | lVar15 << 0x20;
      uStack344 = (ulong)uVar12;
      uVar14 = lib::L2CValue::as_number(aLStack400);
      lVar15 = lib::L2CValue::as_number(aLStack416);
      uVar12 = lib::L2CValue::as_number((L2CValue *)(auStack448 + 0x10));
      local_90 = uVar14 & 0xffffffff | lVar15 << 0x20;
      uStack136 = (ulong)uVar12;
      uVar12 = app::lua_bind::EffectModule__req_impl
                         (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar9,
                          (Vector3f *)&local_160,(Vector3f *)&local_90,1.0,0,-1,false,0);
      lib::L2CValue::L2CValue(aLStack480,uVar12);
      lib::L2CValue::~L2CValue(aLStack480);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack448 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)auStack448);
      lib::L2CValue::~L2CValue(aLStack416);
      lib::L2CValue::~L2CValue(aLStack400);
      lib::L2CValue::~L2CValue((L2CValue *)auStack384);
      lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::L2CValue((L2CValue *)&local_160,true);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_90,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_CROWN_EFFECT_ENABLE);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_160);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      app::lua_bind::WorkModule__set_flag_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),(bool)(bVar1 & 1),iVar3);
    }
    else {
LAB_71001c5750:
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x92a3b5b68);
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
      fVar13 = (float)app::lua_bind::GroundModule__get_z_impl
                                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
      lib::L2CValue::L2CValue((L2CValue *)auStack384,fVar13);
      lib::L2CValue::L2CValue(aLStack400,0.0);
      lib::L2CValue::L2CValue(aLStack416,0.0);
      lib::L2CValue::operator-(param_4);
      lib::L2CAgent::math_atan((L2CAgent *)auStack448,param_5,(L2CValue *)puVar11);
      HVar9 = lib::L2CValue::as_hash((L2CValue *)&local_a0);
      uVar14 = lib::L2CValue::as_number(pLVar5);
      lVar15 = lib::L2CValue::as_number(pLVar6);
      uVar12 = lib::L2CValue::as_number((L2CValue *)auStack384);
      local_160 = uVar14 & 0xffffffff | lVar15 << 0x20;
      uStack344 = (ulong)uVar12;
      uVar14 = lib::L2CValue::as_number(aLStack400);
      lVar15 = lib::L2CValue::as_number(aLStack416);
      uVar12 = lib::L2CValue::as_number((L2CValue *)(auStack448 + 0x10));
      local_90 = uVar14 & 0xffffffff | lVar15 << 0x20;
      uStack136 = (ulong)uVar12;
      uVar12 = app::lua_bind::EffectModule__req_impl
                         (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar9,
                          (Vector3f *)&local_160,(Vector3f *)&local_90,1.0,0,-1,false,0);
      lib::L2CValue::L2CValue(aLStack464,uVar12);
      lib::L2CValue::~L2CValue(aLStack464);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack448 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)auStack448);
      lib::L2CValue::~L2CValue(aLStack416);
      lib::L2CValue::~L2CValue(aLStack400);
      lib::L2CValue::~L2CValue((L2CValue *)auStack384);
      lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::L2CValue((L2CValue *)&local_160,true);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_90,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_CROWN_EFFECT_ENABLE);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_160);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      app::lua_bind::WorkModule__set_flag_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),(bool)(bVar1 & 1),iVar3);
    }
  }
  else {
LAB_71001c5044:
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x92a3b5b68);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
    fVar13 = (float)app::lua_bind::GroundModule__get_z_impl
                              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
    lib::L2CValue::L2CValue((L2CValue *)auStack384,fVar13);
    lib::L2CValue::L2CValue(aLStack400,0.0);
    lib::L2CValue::L2CValue(aLStack416,0.0);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
    lib::L2CValue::operator-(pLVar7);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x1fbdb2615);
    lib::L2CAgent::math_atan((L2CAgent *)auStack448,pLVar7,(L2CValue *)puVar11);
    HVar9 = lib::L2CValue::as_hash((L2CValue *)&local_a0);
    uVar14 = lib::L2CValue::as_number(pLVar5);
    lVar15 = lib::L2CValue::as_number(pLVar6);
    uVar12 = lib::L2CValue::as_number((L2CValue *)auStack384);
    local_160 = uVar14 & 0xffffffff | lVar15 << 0x20;
    uStack344 = (ulong)uVar12;
    uVar14 = lib::L2CValue::as_number(aLStack400);
    lVar15 = lib::L2CValue::as_number(aLStack416);
    uVar12 = lib::L2CValue::as_number((L2CValue *)(auStack448 + 0x10));
    local_90 = uVar14 & 0xffffffff | lVar15 << 0x20;
    uStack136 = (ulong)uVar12;
    uVar12 = app::lua_bind::EffectModule__req_impl
                       (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar9,
                        (Vector3f *)&local_160,(Vector3f *)&local_90,1.0,0,-1,false,0);
    lib::L2CValue::L2CValue((L2CValue *)(auStack384 + 0x10),uVar12);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack384 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack448 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)auStack448);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue((L2CValue *)auStack384);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::L2CValue((L2CValue *)&local_160,true);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_CROWN_EFFECT_ENABLE);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_160);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    app::lua_bind::WorkModule__set_flag_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),(bool)(bVar1 & 1),iVar3);
  }
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::~L2CValue((L2CValue *)&local_160);
LAB_71001c5230:
  lib::L2CValue::L2CValue((L2CValue *)&local_160,_CAMERA_QUAKE_KIND_M);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_160);
  app::lua_bind::CameraModule__req_quake_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_160);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,9);
  lib::L2CValue::L2CValue((L2CValue *)&local_160,0xd2fe44f91);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0);
  HVar9 = lib::L2CValue::as_hash((L2CValue *)&local_160);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  app::lua_bind::ControlModule__set_rumble_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar9,iVar3,false,0x50000000);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_160);
  lib::L2CValue::L2CValue((L2CValue *)&local_160,2);
  lib::L2CValue::operator+((L2CValue *)&local_90,(L2CValue *)&local_160);
  lib::L2CValue::~L2CValue((L2CValue *)&local_160);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_160,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_CONTROL_RUMBLE_COUNT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_160);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3,iVar4);
  lib::L2CValue::~L2CValue((L2CValue *)&local_160);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue(aLStack496,0.0);
  lib::L2CValue::L2CValue(aLStack512,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x10,(L2CValue)0x0);
  lib::L2CValue::~L2CValue(aLStack512);
  lib::L2CValue::~L2CValue(aLStack496);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x18cdc1683);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)auStack384,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack384);
  uVar16 = app::lua_bind::KineticModule__get_sum_speed_impl
                     (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_160,(float)uVar16);
  lib::L2CValue::L2CValue(aLStack336,(float)((ulong)uVar16 >> 0x20));
  lib::L2CValue::operator=(pLVar5,(L2CValue *)&local_160);
  lib::L2CValue::operator=(pLVar6,aLStack336);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue((L2CValue *)&local_160);
  lib::L2CValue::~L2CValue((L2CValue *)auStack384);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x18cdc1683);
  lib::L2CValue::operator-(pLVar5);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack384,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_TURN_SPEED_GROUND);
  fVar13 = (float)lib::L2CValue::as_number((L2CValue *)&local_160);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack384);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar13,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)auStack384);
  lib::L2CValue::~L2CValue((L2CValue *)&local_160);
  lib::L2CValue::L2CValue((L2CValue *)&local_160,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack400,0x96a3d669c);
  uVar14 = lib::L2CValue::as_integer((L2CValue *)&local_160);
  uVar10 = lib::L2CValue::as_integer(aLStack400);
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar14,uVar10);
  lib::L2CValue::L2CValue((L2CValue *)auStack384,fVar13);
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue((L2CValue *)&local_160);
  pLVar5 = (L2CValue *)0x18cdc1683;
  this_05 = (L2CAgent *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x18cdc1683);
  lib::L2CAgent::math_abs(this_05,pLVar5);
  lib::L2CAgent::math_abs((L2CAgent *)auStack384,pLVar5);
  uVar14 = lib::L2CValue::operator<=(aLStack400,(L2CValue *)&local_160);
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue((L2CValue *)&local_160);
  if ((uVar14 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_160,0x14d8411c96);
    HVar9 = lib::L2CValue::as_hash((L2CValue *)&local_160);
    iVar3 = app::lua_bind::SoundModule__play_se_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar9,true,false,false
                       ,false,0);
    lib::L2CValue::L2CValue(aLStack544,iVar3);
    pLVar5 = aLStack544;
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_160,0x14af462c00);
    HVar9 = lib::L2CValue::as_hash((L2CValue *)&local_160);
    iVar3 = app::lua_bind::SoundModule__play_se_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar9,true,false,false
                       ,false,0);
    lib::L2CValue::L2CValue(aLStack528,iVar3);
    pLVar5 = aLStack528;
  }
  lib::L2CValue::~L2CValue(pLVar5);
  lib::L2CValue::~L2CValue((L2CValue *)&local_160);
  lib::L2CValue::L2CValue(aLStack400);
  lib::L2CValue::L2CValue(aLStack416,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_TURN);
  iVar3 = lib::L2CValue::as_integer(aLStack416);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_160,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_160);
  lib::L2CValue::~L2CValue((L2CValue *)&local_160);
  lib::L2CValue::~L2CValue(aLStack416);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_160,true);
    lib::L2CValue::operator=(aLStack400,(L2CValue *)&local_160);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_160,false);
    lib::L2CValue::operator=(aLStack400,(L2CValue *)&local_160);
  }
  lib::L2CValue::~L2CValue((L2CValue *)&local_160);
  lib::L2CValue::L2CValue((L2CValue *)&local_160,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_TURN);
  bVar1 = lib::L2CValue::as_bool(aLStack400);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_160);
  app::lua_bind::WorkModule__set_flag_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),(bool)(bVar1 & 1),iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_160);
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue((L2CValue *)auStack384);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  return;
}

