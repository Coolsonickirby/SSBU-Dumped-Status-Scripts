
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100024b60(void *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  GroundCorrectKind GVar6;
  ulong uVar7;
  ulong uVar8;
  L2CValue *pLVar9;
  L2CValue *pLVar10;
  L2CValue *pLVar11;
  L2CAgent *this;
  FighterKineticEnergyGravity *pFVar12;
  void *pvVar13;
  KineticEnergyNormal *pKVar14;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  Hash40 HVar15;
  undefined8 *puVar16;
  BattleObjectModuleAccessor **ppBVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  long lVar23;
  L2CValue aLStack736 [16];
  L2CValue aLStack720 [16];
  undefined local_2c0 [32];
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  undefined auStack576 [16];
  undefined auStack560 [16];
  undefined auStack544 [32];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  undefined auStack464 [16];
  undefined auStack448 [16];
  undefined auStack432 [32];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  undefined auStack368 [32];
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
  lua_State *plStack152;
  
  lib::L2CValue::L2CValue((L2CValue *)local_2c0,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x128f9a3104);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)local_2c0);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  ppBVar17 = (BattleObjectModuleAccessor **)((long)param_1 + 0x40);
  fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack176,fVar18);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
  lib::L2CValue::L2CValue((L2CValue *)local_2c0,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0xe16af1eb2);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)local_2c0);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack192,fVar18);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
  lib::L2CValue::L2CValue((L2CValue *)local_2c0,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0xf86b3e1ed);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)local_2c0);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack208,fVar18);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
  lib::L2CValue::L2CValue((L2CValue *)local_2c0,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x10e296f334);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)local_2c0);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack224,fVar18);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
  lib::L2CValue::L2CValue((L2CValue *)local_2c0,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x9f984e282);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)local_2c0);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack240,fVar18);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
  iVar3 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar17);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)local_2c0,SITUATION_KIND_AIR);
  uVar7 = lib::L2CValue::operator==((L2CValue *)&local_a0,(L2CValue *)local_2c0);
  lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack256,0xd9836d31b);
    uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    uVar8 = lib::L2CValue::as_integer(aLStack256);
    fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar7,uVar8);
    lib::L2CValue::L2CValue((L2CValue *)local_2c0,fVar18);
    lib::L2CValue::operator=(aLStack240,(L2CValue *)local_2c0);
    lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  }
  lib::L2CValue::L2CValue((L2CValue *)local_2c0,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0xf91c8f5ae);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)local_2c0);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack256,fVar18);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
  lib::L2CValue::L2CValue((L2CValue *)local_2c0,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0xa03861722);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)local_2c0);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack272,fVar18);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
  lib::L2CValue::L2CValue((L2CValue *)local_2c0,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0xae7a10db6);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)local_2c0);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar17,uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack288,fVar18);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
  lib::L2CValue::L2CValue(aLStack320,0.0);
  lib::L2CValue::L2CValue(aLStack336,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xc0,(L2CValue)0xb0);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack320);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x18cdc1683);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  uVar22 = app::lua_bind::KineticModule__get_sum_speed_impl(*ppBVar17,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)local_2c0,(float)uVar22);
  pLVar11 = (L2CValue *)(local_2c0 + 0x10);
  lib::L2CValue::L2CValue(pLVar11,(float)((ulong)uVar22 >> 0x20));
  lib::L2CValue::operator=(pLVar9,(L2CValue *)local_2c0);
  lib::L2CValue::operator=(pLVar10,pLVar11);
  lib::L2CValue::~L2CValue(pLVar11);
  lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  fVar18 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar17);
  lib::L2CValue::L2CValue((L2CValue *)(auStack368 + 0x10),fVar18);
  lib::L2CValue::L2CValue((L2CValue *)local_2c0,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_FLOAT_SPEED);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_2c0);
  fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)auStack368,fVar18);
  lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
  lib::L2CValue::L2CValue((L2CValue *)local_2c0,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_FLOAT_ANGLE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_2c0);
  fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,iVar3);
  lib::L2CValue::L2CValue(aLStack384,fVar18);
  lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
  iVar3 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar17);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)local_2c0,_SITUATION_KIND_GROUND);
  bVar1 = lib::L2CValue::operator==((L2CValue *)&local_a0,(L2CValue *)local_2c0);
  lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
  lib::L2CValue::L2CValue(aLStack400,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack432 + 0x10),false);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack400);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)local_2c0,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_INT_TURN_FLAG);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_2c0);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar17,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
    fVar18 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar17);
    lib::L2CValue::L2CValue((L2CValue *)auStack432,fVar18);
    lib::L2CValue::L2CValue((L2CValue *)local_2c0,0);
    uVar7 = lib::L2CValue::operator==((L2CValue *)&local_a0,(L2CValue *)local_2c0);
    lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
    if ((uVar7 & 1) == 0) {
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x18cdc1683);
      lib::L2CValue::L2CValue((L2CValue *)local_2c0,0.0);
      pLVar11 = (L2CValue *)local_2c0;
      uVar7 = lib::L2CValue::operator==(pLVar9,pLVar11);
      lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
      if ((uVar7 & 1) == 0) {
        lib::L2CAgent::math_abs((L2CAgent *)auStack432,pLVar11);
        uVar7 = lib::L2CValue::operator<(aLStack288,(L2CValue *)local_2c0);
        lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)local_2c0,0.0);
          uVar7 = lib::L2CValue::operator<((L2CValue *)local_2c0,(L2CValue *)auStack432);
          lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)local_2c0,1.0);
            lib::L2CValue::operator-((L2CValue *)local_2c0);
            lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)auStack448,1.0);
          }
          uVar7 = lib::L2CValue::operator==((L2CValue *)(auStack368 + 0x10),(L2CValue *)auStack448);
          if ((uVar7 & 1) == 0) {
            app::lua_bind::AttackModule__clear_all_impl(*ppBVar17);
            lib::L2CValue::L2CValue
                      ((L2CValue *)local_2c0,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_FLOAT_RESERVE_DIR)
            ;
            fVar18 = (float)lib::L2CValue::as_number((L2CValue *)auStack448);
            iVar3 = lib::L2CValue::as_integer((L2CValue *)local_2c0);
            app::lua_bind::WorkModule__set_float_impl(*ppBVar17,fVar18,iVar3);
            lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
            pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x18cdc1683);
            lib::L2CValue::L2CValue
                      ((L2CValue *)local_2c0,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_FLOAT_SPEED_BACKUP
                      );
            fVar18 = (float)lib::L2CValue::as_number(pLVar11);
            iVar3 = lib::L2CValue::as_integer((L2CValue *)local_2c0);
            app::lua_bind::WorkModule__set_float_impl(*ppBVar17,fVar18,iVar3);
            lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
            pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x18cdc1683);
            lib::L2CValue::L2CValue((L2CValue *)local_2c0,-0.1);
            lib::L2CValue::operator*(pLVar11,(L2CValue *)local_2c0);
            lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
            lib::L2CValue::L2CValue
                      ((L2CValue *)local_2c0,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_FLOAT_ACCEL);
            fVar18 = (float)lib::L2CValue::as_number((L2CValue *)auStack464);
            iVar3 = lib::L2CValue::as_integer((L2CValue *)local_2c0);
            app::lua_bind::WorkModule__set_float_impl(*ppBVar17,fVar18,iVar3);
            lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
            lib::L2CValue::~L2CValue((L2CValue *)auStack464);
            lib::L2CValue::L2CValue((L2CValue *)local_2c0,0);
            lib::L2CValue::L2CValue
                      ((L2CValue *)auStack464,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_INT_EFFECT_FRAME)
            ;
            iVar3 = lib::L2CValue::as_integer((L2CValue *)local_2c0);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack464);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar17,iVar3,iVar4);
            lib::L2CValue::~L2CValue((L2CValue *)auStack464);
            lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
            lib::L2CValue::L2CValue((L2CValue *)local_2c0,_FIGHTER_YOSHI_STATUS_KIND_SPECIAL_S_TURN)
            ;
            lib::L2CValue::L2CValue
                      ((L2CValue *)auStack464,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_INT_NEXT_STATUS);
            iVar3 = lib::L2CValue::as_integer((L2CValue *)local_2c0);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack464);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar17,iVar3,iVar4);
            lib::L2CValue::~L2CValue((L2CValue *)auStack464);
            lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
            FUN_710000dc80(param_1);
          }
          lib::L2CValue::~L2CValue((L2CValue *)auStack448);
        }
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)auStack448,false);
    lib::L2CValue::L2CValue
              ((L2CValue *)local_2c0,_FIGHTER_YOSHI_INSTANCE_WORK_ID_FLOAT_SPECIAL_S_GROUND_ANGLE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_2c0);
    fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack464,fVar18);
    lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
    lib::L2CValue::L2CValue(aLStack496,0.0);
    lib::L2CValue::L2CValue(aLStack512,0.0);
    lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x10,(L2CValue)0x0);
    lib::L2CValue::~L2CValue(aLStack512);
    lib::L2CValue::~L2CValue(aLStack496);
    pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack480,0x18cdc1683);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack480,0x1fbdb2615);
    lib::L2CValue::L2CValue((L2CValue *)(auStack544 + 0x10),GROUND_TOUCH_FLAG_DOWN);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)(auStack544 + 0x10));
    uVar22 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar17,uVar5);
    lib::L2CValue::L2CValue((L2CValue *)local_2c0,(float)uVar22);
    pLVar11 = (L2CValue *)(local_2c0 + 0x10);
    lib::L2CValue::L2CValue(pLVar11,(float)((ulong)uVar22 >> 0x20));
    lib::L2CValue::operator=(pLVar9,(L2CValue *)local_2c0);
    lib::L2CValue::operator=(pLVar10,pLVar11);
    lib::L2CValue::~L2CValue(pLVar11);
    lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack544 + 0x10));
    pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack480,0x18cdc1683);
    pLVar10 = (L2CValue *)0x1fbdb2615;
    pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack480,0x1fbdb2615);
    lib::L2CValue::L2CValue((L2CValue *)auStack544,1.0);
    lib::L2CValue::L2CValue((L2CValue *)auStack560,0.0);
    fVar18 = (float)lib::L2CValue::as_number(pLVar11);
    fVar19 = (float)lib::L2CValue::as_number(pLVar9);
    fVar20 = (float)lib::L2CValue::as_number((L2CValue *)auStack544);
    fVar21 = (float)lib::L2CValue::as_number((L2CValue *)auStack560);
    fVar18 = (float)app::sv_math::vec2_angle(fVar18,fVar19,fVar20,fVar21);
    lib::L2CValue::L2CValue((L2CValue *)local_2c0,fVar18);
    lib::L2CAgent::math_deg((L2CAgent *)local_2c0,pLVar10);
    lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack560);
    lib::L2CValue::~L2CValue((L2CValue *)auStack544);
    lib::L2CValue::L2CValue
              ((L2CValue *)local_2c0,_FIGHTER_YOSHI_INSTANCE_WORK_ID_FLOAT_SPECIAL_S_GROUND_ANGLE);
    fVar18 = (float)lib::L2CValue::as_number((L2CValue *)(auStack544 + 0x10));
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_2c0);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar17,fVar18,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
    bVar1 = app::lua_bind::GroundModule__is_ottotto_impl(*ppBVar17,1.5);
    lib::L2CValue::L2CValue((L2CValue *)local_2c0,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)local_2c0);
    lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_2c0,false);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)local_2c0);
      app::lua_bind::AttackModule__sleep_impl(*ppBVar17,(bool)(bVar1 & 1));
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)local_2c0,0.0);
      uVar7 = lib::L2CValue::operator<((L2CValue *)local_2c0,(L2CValue *)auStack432);
      lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
      if ((uVar7 & 1) == 0) {
LAB_710002573c:
        lib::L2CValue::L2CValue((L2CValue *)local_2c0,0.0);
        uVar7 = lib::L2CValue::operator<((L2CValue *)auStack432,(L2CValue *)local_2c0);
        lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)local_2c0,-1.0);
          uVar7 = lib::L2CValue::operator==((L2CValue *)(auStack368 + 0x10),(L2CValue *)local_2c0);
          lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
          if ((uVar7 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)local_2c0,true);
            lib::L2CValue::operator=((L2CValue *)(auStack432 + 0x10),(L2CValue *)local_2c0);
            lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
            lib::L2CValue::L2CValue((L2CValue *)local_2c0,90.0);
            uVar7 = lib::L2CValue::operator<((L2CValue *)auStack464,(L2CValue *)local_2c0);
            lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
            if ((uVar7 & 1) != 0) {
              lib::L2CValue::L2CValue((L2CValue *)local_2c0,true);
              lib::L2CValue::operator=((L2CValue *)auStack448,(L2CValue *)local_2c0);
              goto LAB_71000257f0;
            }
          }
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)local_2c0,1.0);
        uVar7 = lib::L2CValue::operator==((L2CValue *)(auStack368 + 0x10),(L2CValue *)local_2c0);
        lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
        if ((uVar7 & 1) == 0) goto LAB_710002573c;
        lib::L2CValue::L2CValue((L2CValue *)local_2c0,true);
        lib::L2CValue::operator=((L2CValue *)(auStack432 + 0x10),(L2CValue *)local_2c0);
        lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
        lib::L2CValue::L2CValue((L2CValue *)local_2c0,90.0);
        uVar7 = lib::L2CValue::operator<((L2CValue *)local_2c0,(L2CValue *)auStack464);
        lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)local_2c0,true);
          lib::L2CValue::operator=((L2CValue *)auStack448,(L2CValue *)local_2c0);
LAB_71000257f0:
          lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
        }
      }
      lib::L2CValue::L2CValue((L2CValue *)local_2c0,false);
      uVar7 = lib::L2CValue::operator==((L2CValue *)(auStack432 + 0x10),(L2CValue *)local_2c0);
      lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)local_2c0,false);
        uVar7 = lib::L2CValue::operator==((L2CValue *)auStack448,(L2CValue *)local_2c0);
        lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)local_2c0,true);
          bVar1 = lib::L2CValue::as_bool((L2CValue *)local_2c0);
          app::lua_bind::AttackModule__sleep_impl(*ppBVar17,(bool)(bVar1 & 1));
          goto LAB_7100025894;
        }
      }
      lib::L2CValue::L2CValue((L2CValue *)local_2c0,false);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)local_2c0);
      app::lua_bind::AttackModule__sleep_impl(*ppBVar17,(bool)(bVar1 & 1));
    }
LAB_7100025894:
    lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
    lib::L2CValue::L2CValue((L2CValue *)local_2c0,0.0);
    uVar7 = lib::L2CValue::operator==((L2CValue *)auStack464,(L2CValue *)local_2c0);
    lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
    if ((uVar7 & 1) == 0) {
      pLVar11 = (L2CValue *)auStack464;
      lib::L2CValue::operator-((L2CValue *)(auStack544 + 0x10),pLVar11);
      lib::L2CAgent::math_abs((L2CAgent *)auStack544,pLVar11);
      uVar7 = lib::L2CValue::operator<(aLStack272,(L2CValue *)local_2c0);
      lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
      lib::L2CValue::~L2CValue((L2CValue *)auStack544);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)local_2c0,1.0);
        uVar7 = lib::L2CValue::operator==((L2CValue *)(auStack368 + 0x10),(L2CValue *)local_2c0);
        lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
        if ((uVar7 & 1) == 0) {
LAB_710002599c:
          lib::L2CValue::L2CValue((L2CValue *)local_2c0,-1.0);
          uVar7 = lib::L2CValue::operator==((L2CValue *)(auStack368 + 0x10),(L2CValue *)local_2c0);
          lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
          if ((uVar7 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)local_2c0,0.0);
            uVar7 = lib::L2CValue::operator<((L2CValue *)auStack432,(L2CValue *)local_2c0);
            lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
            if ((uVar7 & 1) != 0) {
              lib::L2CValue::L2CValue((L2CValue *)local_2c0,90.0);
              uVar7 = lib::L2CValue::operator<((L2CValue *)auStack464,(L2CValue *)local_2c0);
              lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
              if ((uVar7 & 1) != 0) {
                lib::L2CValue::L2CValue((L2CValue *)local_2c0,true);
                lib::L2CValue::operator=((L2CValue *)auStack448,(L2CValue *)local_2c0);
                goto LAB_7100025a30;
              }
            }
          }
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)local_2c0,0.0);
          uVar7 = lib::L2CValue::operator<((L2CValue *)local_2c0,(L2CValue *)auStack432);
          lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
          if ((uVar7 & 1) == 0) goto LAB_710002599c;
          lib::L2CValue::L2CValue((L2CValue *)local_2c0,90.0);
          uVar7 = lib::L2CValue::operator<((L2CValue *)local_2c0,(L2CValue *)auStack464);
          lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
          if ((uVar7 & 1) == 0) goto LAB_7100025a38;
          lib::L2CValue::L2CValue((L2CValue *)local_2c0,true);
          lib::L2CValue::operator=((L2CValue *)auStack448,(L2CValue *)local_2c0);
LAB_7100025a30:
          lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
        }
      }
    }
LAB_7100025a38:
    lib::L2CValue::L2CValue((L2CValue *)local_2c0,true);
    uVar7 = lib::L2CValue::operator==((L2CValue *)auStack448,(L2CValue *)local_2c0);
    lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_2c0,90.0);
      pLVar11 = (L2CValue *)local_2c0;
      lib::L2CValue::operator-((L2CValue *)auStack464,pLVar11);
      lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
      lib::L2CAgent::math_abs((L2CAgent *)auStack560,pLVar11);
      lib::L2CValue::operator=((L2CValue *)auStack464,(L2CValue *)auStack544);
      lib::L2CValue::~L2CValue((L2CValue *)auStack544);
      lib::L2CValue::~L2CValue((L2CValue *)auStack560);
      lib::L2CValue::L2CValue((L2CValue *)local_2c0,false);
      pLVar11 = (L2CValue *)local_2c0;
      lib::L2CValue::operator=(aLStack400,pLVar11);
      lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
      lib::L2CAgent::math_rad((L2CAgent *)auStack464,pLVar11);
      pLVar9 = (L2CValue *)0x18cdc1683;
      pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x18cdc1683);
      lib::L2CAgent::math_cos((L2CAgent *)local_2c0,pLVar9);
      lib::L2CAgent::math_abs((L2CAgent *)auStack576,pLVar9);
      lib::L2CValue::operator*(pLVar11,(L2CValue *)auStack560);
      pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x18cdc1683);
      lib::L2CValue::operator=(pLVar11,(L2CValue *)auStack544);
      lib::L2CValue::~L2CValue((L2CValue *)auStack544);
      lib::L2CValue::~L2CValue((L2CValue *)auStack560);
      lib::L2CValue::~L2CValue((L2CValue *)auStack576);
      pLVar11 = (L2CValue *)0x18cdc1683;
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x18cdc1683);
      lib::L2CAgent::math_sin((L2CAgent *)local_2c0,pLVar11);
      pLVar11 = (L2CValue *)auStack576;
      lib::L2CValue::operator*(pLVar9,pLVar11);
      lib::L2CAgent::math_abs((L2CAgent *)auStack560,pLVar11);
      pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x1fbdb2615);
      lib::L2CValue::operator=(pLVar11,(L2CValue *)auStack544);
      lib::L2CValue::~L2CValue((L2CValue *)auStack544);
      lib::L2CValue::~L2CValue((L2CValue *)auStack560);
      lib::L2CValue::~L2CValue((L2CValue *)auStack576);
      lib::L2CValue::L2CValue((L2CValue *)auStack544,0.0);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack560,_FIGHTER_YOSHI_INSTANCE_WORK_ID_FLOAT_SPECIAL_S_GROUND_ANGLE
                );
      fVar18 = (float)lib::L2CValue::as_number((L2CValue *)auStack544);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack560);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar17,fVar18,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)auStack560);
      lib::L2CValue::~L2CValue((L2CValue *)auStack544);
      lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
    }
    lib::L2CValue::~L2CValue((L2CValue *)(auStack544 + 0x10));
    lib::L2CValue::~L2CValue(aLStack480);
    lib::L2CValue::~L2CValue((L2CValue *)auStack464);
    lib::L2CValue::~L2CValue((L2CValue *)auStack448);
    lib::L2CValue::~L2CValue((L2CValue *)auStack432);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  }
  lib::L2CValue::L2CValue((L2CValue *)auStack432,false);
  lib::L2CValue::L2CValue((L2CValue *)local_2c0,1.0);
  uVar7 = lib::L2CValue::operator==((L2CValue *)(auStack368 + 0x10),(L2CValue *)local_2c0);
  lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,_GROUND_TOUCH_FLAG_LEFT);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar17,uVar5);
    lib::L2CValue::L2CValue((L2CValue *)local_2c0,(bool)(bVar1 & 1));
    lib::L2CValue::operator=((L2CValue *)auStack432,(L2CValue *)local_2c0);
    lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)auStack432);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack608,_GROUND_TOUCH_FLAG_LEFT);
      FUN_7100020bc0(param_1,aLStack608);
      pLVar11 = aLStack608;
      goto LAB_7100025d60;
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,GROUND_TOUCH_FLAG_RIGHT);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar17,uVar5);
    lib::L2CValue::L2CValue((L2CValue *)local_2c0,(bool)(bVar1 & 1));
    lib::L2CValue::operator=((L2CValue *)auStack432,(L2CValue *)local_2c0);
    lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)auStack432);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack592,GROUND_TOUCH_FLAG_RIGHT);
      FUN_7100020bc0(param_1,aLStack592);
      pLVar11 = aLStack592;
LAB_7100025d60:
      lib::L2CValue::~L2CValue(pLVar11);
    }
  }
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)auStack432);
  if ((bVar2 & 1U) == 0) {
    bVar1 = app::lua_bind::StatusModule__is_situation_changed_impl(*ppBVar17);
    lib::L2CValue::L2CValue((L2CValue *)local_2c0,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)local_2c0);
    lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
    if ((bVar2 & 1U) == 0) goto LAB_71000262a4;
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack400);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_2c0,0x124509fe43);
      fVar18 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar17);
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,fVar18);
      lib::L2CValue::L2CValue((L2CValue *)auStack448,0.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack464,true);
      HVar15 = lib::L2CValue::as_hash((L2CValue *)local_2c0);
      fVar18 = (float)lib::L2CValue::as_number((L2CValue *)&local_a0);
      fVar19 = (float)lib::L2CValue::as_number((L2CValue *)auStack448);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)auStack464);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar17,HVar15,fVar18,fVar19,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue((L2CValue *)auStack464);
      lib::L2CValue::~L2CValue((L2CValue *)auStack448);
      lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
      FUN_710000dc80(param_1);
      goto LAB_71000262a4;
    }
    pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x1fbdb2615);
    pLVar9 = aLStack208;
    lib::L2CValue::operator*(pLVar11,pLVar9);
    lib::L2CAgent::math_abs((L2CAgent *)&local_a0,pLVar9);
    pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x1fbdb2615);
    lib::L2CValue::operator=(pLVar11,(L2CValue *)local_2c0);
    lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x1fbdb2615);
    uVar7 = lib::L2CValue::operator<(pLVar11,aLStack224);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_2c0,false);
      pLVar11 = (L2CValue *)local_2c0;
      lib::L2CValue::operator=(aLStack400,pLVar11);
      lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
      fVar18 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar17);
      lib::L2CValue::L2CValue((L2CValue *)auStack448,fVar18);
      lib::L2CAgent::math_abs((L2CAgent *)auStack448,pLVar11);
      uVar7 = lib::L2CValue::operator<(aLStack288,(L2CValue *)local_2c0);
      lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)local_2c0,0.0);
        uVar7 = lib::L2CValue::operator<((L2CValue *)local_2c0,(L2CValue *)auStack448);
        lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
        bVar2 = (uVar7 & 1) == 0;
        if (bVar2) {
          lib::L2CValue::L2CValue((L2CValue *)auStack464,1.0);
          lib::L2CValue::operator-((L2CValue *)auStack464);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_a0,1.0);
        }
        puVar16 = &local_a0;
        lib::L2CValue::operator=((L2CValue *)(auStack368 + 0x10),(L2CValue *)puVar16);
        lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
        if (bVar2) {
          lib::L2CValue::~L2CValue((L2CValue *)auStack464);
        }
        lib::L2CAgent::math_abs((L2CAgent *)auStack448,(L2CValue *)puVar16);
        lib::L2CValue::operator*((L2CValue *)&local_a0,aLStack256);
        lib::L2CValue::operator=((L2CValue *)auStack368,(L2CValue *)local_2c0);
        lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
        lib::L2CValue::operator*((L2CValue *)auStack368,(L2CValue *)(auStack368 + 0x10));
        pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x18cdc1683);
        lib::L2CValue::operator=(pLVar11,(L2CValue *)local_2c0);
        lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
        fVar18 = (float)lib::L2CValue::as_number((L2CValue *)(auStack368 + 0x10));
        app::lua_bind::PostureModule__set_lr_impl(*ppBVar17,fVar18);
        app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar17);
        lib::L2CValue::L2CValue(aLStack624,0.0);
        lib::L2CValue::L2CValue(aLStack640,0.0);
        lib::L2CValue::L2CValue(aLStack656,0.0);
        lua2cpp::L2CFighterBase::Vector3__create
                  (param_1,(L2CValue)0x90,(L2CValue)0x80,(L2CValue)0x70);
        lib::L2CValue::~L2CValue(aLStack656);
        lib::L2CValue::~L2CValue(aLStack640);
        lib::L2CValue::~L2CValue(aLStack624);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack480,0x18cdc1683);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack480,0x1fbdb2615);
        this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack480,0x162d277af);
        lib::L2CValue::L2CValue((L2CValue *)(auStack544 + 0x10),0x31d39a761);
        pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack480,0x18cdc1683);
        this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack480,0x1fbdb2615);
        this_02 = (L2CValue *)lib::L2CValue::operator[](aLStack480,0x162d277af);
        HVar15 = lib::L2CValue::as_hash((L2CValue *)(auStack544 + 0x10));
        uVar7 = lib::L2CValue::as_number(pLVar11);
        lVar23 = lib::L2CValue::as_number(this_01);
        uVar5 = lib::L2CValue::as_number(this_02);
        local_a0 = (void **)(uVar7 & 0xffffffff | lVar23 << 0x20);
        plStack152 = (lua_State *)(ulong)uVar5;
        app::lua_bind::ModelModule__joint_rotate_impl(*ppBVar17,HVar15,(Vector3f *)&local_a0);
        lib::L2CValue::L2CValue((L2CValue *)local_2c0,(float)local_a0);
        pLVar11 = (L2CValue *)(local_2c0 + 0x10);
        lib::L2CValue::L2CValue(pLVar11,local_a0._4_4_);
        lib::L2CValue::L2CValue(aLStack672,plStack152._0_4_);
        lib::L2CValue::operator=(pLVar9,(L2CValue *)local_2c0);
        lib::L2CValue::operator=(pLVar10,pLVar11);
        pLVar9 = aLStack672;
        lib::L2CValue::operator=(this_00,aLStack672);
        lib::L2CValue::~L2CValue(aLStack672);
        lib::L2CValue::~L2CValue(pLVar11);
        lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack544 + 0x10));
        lib::L2CValue::L2CValue((L2CValue *)&local_a0,0.0);
        lib::L2CAgent::math_deg((L2CAgent *)&local_a0,pLVar9);
        pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack480,0x1fbdb2615);
        lib::L2CValue::operator=(pLVar11,(L2CValue *)local_2c0);
        lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
        lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x31d39a761);
        pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack480,0x18cdc1683);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack480,0x1fbdb2615);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack480,0x162d277af);
        HVar15 = lib::L2CValue::as_hash((L2CValue *)&local_a0);
        uVar7 = lib::L2CValue::as_number(pLVar11);
        lVar23 = lib::L2CValue::as_number(pLVar9);
        uVar5 = lib::L2CValue::as_number(pLVar10);
        local_2c0._0_8_ = (void **)(uVar7 & 0xffffffff | lVar23 << 0x20);
        local_2c0._8_8_ = (lua_State *)(ulong)uVar5;
        app::lua_bind::ModelModule__set_joint_rotate_impl
                  (*ppBVar17,HVar15,(Vector3f *)local_2c0,0,0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
        lib::L2CValue::~L2CValue(aLStack480);
      }
      FUN_710000dc80(param_1);
      lib::L2CValue::~L2CValue((L2CValue *)auStack448);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)local_2c0,0xe075b0b8c);
      fVar18 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar17);
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,fVar18);
      lib::L2CValue::L2CValue((L2CValue *)auStack448,0.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack464,true);
      pLVar11 = (L2CValue *)lib::L2CValue::as_hash((L2CValue *)local_2c0);
      fVar18 = (float)lib::L2CValue::as_number((L2CValue *)&local_a0);
      fVar19 = (float)lib::L2CValue::as_number((L2CValue *)auStack448);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)auStack464);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar17,(Hash40)pLVar11,fVar18,fVar19,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue((L2CValue *)auStack464);
      lib::L2CValue::~L2CValue((L2CValue *)auStack448);
      lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
      lib::L2CAgent::math_abs((L2CAgent *)auStack368,pLVar11);
      lib::L2CValue::L2CValue((L2CValue *)local_2c0,0.01);
      uVar7 = lib::L2CValue::operator<((L2CValue *)&local_a0,(L2CValue *)local_2c0);
      lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)local_2c0,0.01);
        lib::L2CValue::operator=((L2CValue *)auStack368,(L2CValue *)local_2c0);
        lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
      }
      lib::L2CValue::operator*((L2CValue *)auStack368,(L2CValue *)(auStack368 + 0x10));
      pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x18cdc1683);
      lib::L2CValue::operator=(pLVar11,(L2CValue *)local_2c0);
      lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x1fbdb2615);
      lib::L2CValue::L2CValue((L2CValue *)local_2c0,0.0);
      pLVar11 = (L2CValue *)local_2c0;
      lib::L2CValue::operator=(pLVar9,pLVar11);
      lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
      lib::L2CAgent::math_abs((L2CAgent *)auStack368,pLVar11);
      lib::L2CValue::L2CValue((L2CValue *)local_2c0,2.0);
      lib::L2CValue::operator*((L2CValue *)local_2c0,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SYSTEM);
      lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
      lib::L2CValue::L2CValue((L2CValue *)local_2c0,6.0);
      lib::L2CValue::operator*((L2CValue *)auStack560,(L2CValue *)local_2c0);
      lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
      lib::L2CValue::operator/((L2CValue *)(auStack544 + 0x10),(L2CValue *)auStack544);
      lib::L2CValue::L2CValue((L2CValue *)local_2c0,360.0);
      lib::L2CValue::operator*(aLStack480,(L2CValue *)local_2c0);
      lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
      lib::L2CValue::operator*((L2CValue *)auStack464,aLStack240);
      lib::L2CValue::operator+(aLStack384,(L2CValue *)auStack448);
      lib::L2CValue::operator=(aLStack384,(L2CValue *)&local_a0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::~L2CValue((L2CValue *)auStack448);
      lib::L2CValue::~L2CValue((L2CValue *)auStack464);
      lib::L2CValue::~L2CValue(aLStack480);
      lib::L2CValue::~L2CValue((L2CValue *)auStack544);
      lib::L2CValue::~L2CValue((L2CValue *)auStack560);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack544 + 0x10));
      lib::L2CValue::L2CValue
                ((L2CValue *)local_2c0,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_FLOAT_ANGLE);
      fVar18 = (float)lib::L2CValue::as_number(aLStack384);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_2c0);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar17,fVar18,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
      FUN_710000dc80(param_1);
    }
    lib::L2CValue::L2CValue((L2CValue *)local_2c0,0);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_a0,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_INT_SCALE_INDEX);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_2c0);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar17,iVar3,iVar4);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)local_2c0,_FIGHTER_YOSHI_STATUS_KIND_SPECIAL_S_END);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_a0,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_INT_NEXT_STATUS);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_2c0);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar17,iVar3,iVar4);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
    lib::L2CValue::L2CValue
              ((L2CValue *)local_2c0,_FIGHTER_YOSHI_INSTANCE_WORK_ID_FLAG_SPECIAL_S_TOUCH_WALL);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_2c0);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar17,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
    pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x18cdc1683);
    lib::L2CValue::operator-(aLStack176);
    lib::L2CValue::operator*(pLVar11,(L2CValue *)&local_a0);
    pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x18cdc1683);
    lib::L2CValue::operator=(pLVar11,(L2CValue *)local_2c0);
    lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x1fbdb2615);
    lib::L2CValue::operator=(pLVar11,aLStack192);
    lib::L2CValue::L2CValue((L2CValue *)local_2c0,false);
    lib::L2CValue::operator=(aLStack400,(L2CValue *)local_2c0);
  }
  lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
LAB_71000262a4:
  pLVar11 = (L2CValue *)0x18cdc1683;
  this = (L2CAgent *)lib::L2CValue::operator[](aLStack304,0x18cdc1683);
  lib::L2CAgent::math_abs(this,pLVar11);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_FLOAT_SPEED);
  fVar18 = (float)lib::L2CValue::as_number((L2CValue *)local_2c0);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar17,fVar18,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack400);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack736,SITUATION_KIND_AIR);
    lua2cpp::L2CFighterBase::set_situation(param_1,(L2CValue)0x20);
    lib::L2CValue::~L2CValue(aLStack736);
    lib::L2CValue::L2CValue((L2CValue *)local_2c0,GROUND_CORRECT_KIND_AIR);
    GVar6 = lib::L2CValue::as_integer((L2CValue *)local_2c0);
    app::lua_bind::GroundModule__set_correct_impl(*ppBVar17,GVar6);
    lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
    lib::L2CValue::L2CValue((L2CValue *)local_2c0,_FIGHTER_KINETIC_TYPE_YOSHI_SPECIAL_S_AIR);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_2c0);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar17,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
    lib::L2CValue::L2CValue((L2CValue *)local_2c0,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_2c0);
    pvVar13 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar17,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,pvVar13);
    lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
    lib::L2CValue::L2CValue((L2CValue *)local_2c0,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_2c0);
    pvVar13 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar17,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack448,pvVar13);
    lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
    pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack480,0.0);
    uVar7 = lib::L2CValue::as_number(pLVar11);
    uVar5 = lib::L2CValue::as_number(aLStack480);
    local_2c0._0_8_ = (void **)(uVar7 & 0xffffffff | (ulong)uVar5 << 0x20);
    local_2c0._8_8_ = (lua_State *)0x0;
    pKVar14 = (KineticEnergyNormal *)lib::L2CValue::as_pointer((L2CValue *)&local_a0);
    app::lua_bind::KineticEnergyNormal__set_speed_impl(pKVar14,(Vector2f *)local_2c0);
    lib::L2CValue::~L2CValue(aLStack480);
    pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x1fbdb2615);
    fVar18 = (float)lib::L2CValue::as_number(pLVar11);
    pFVar12 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer((L2CValue *)auStack448);
    app::lua_bind::FighterKineticEnergyGravity__set_speed_impl(pFVar12,fVar18);
    lib::L2CValue::L2CValue((L2CValue *)local_2c0,0);
    lib::L2CValue::L2CValue(aLStack480,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_INT_TURN_FLAG);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_2c0);
    iVar4 = lib::L2CValue::as_integer(aLStack480);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar17,iVar3,iVar4);
    lib::L2CValue::~L2CValue(aLStack480);
    lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
    pLVar11 = (L2CValue *)auStack448;
  }
  else {
    lib::L2CValue::L2CValue(aLStack720,_SITUATION_KIND_GROUND);
    lua2cpp::L2CFighterBase::set_situation(param_1,(L2CValue)0x30);
    lib::L2CValue::~L2CValue(aLStack720);
    lib::L2CValue::L2CValue((L2CValue *)local_2c0,false);
    uVar7 = lib::L2CValue::operator==((L2CValue *)(auStack432 + 0x10),(L2CValue *)local_2c0);
    lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_2c0,GROUND_CORRECT_KIND_GROUND);
      GVar6 = lib::L2CValue::as_integer((L2CValue *)local_2c0);
      app::lua_bind::GroundModule__set_correct_impl(*ppBVar17,GVar6);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)local_2c0,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
      GVar6 = lib::L2CValue::as_integer((L2CValue *)local_2c0);
      app::lua_bind::GroundModule__set_correct_impl(*ppBVar17,GVar6);
    }
    lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
    lib::L2CValue::L2CValue((L2CValue *)local_2c0,_FIGHTER_KINETIC_TYPE_YOSHI_SPECIAL_S_GROUND);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_2c0);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar17,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
    lib::L2CValue::L2CValue((L2CValue *)local_2c0,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_2c0);
    pvVar13 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar17,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,pvVar13);
    lib::L2CValue::~L2CValue((L2CValue *)local_2c0);
    pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x18cdc1683);
    lib::L2CValue::L2CValue((L2CValue *)auStack448,0.0);
    uVar7 = lib::L2CValue::as_number(pLVar11);
    uVar5 = lib::L2CValue::as_number((L2CValue *)auStack448);
    local_2c0._0_8_ = (void **)(uVar7 & 0xffffffff | (ulong)uVar5 << 0x20);
    local_2c0._8_8_ = (lua_State *)0x0;
    pKVar14 = (KineticEnergyNormal *)lib::L2CValue::as_pointer((L2CValue *)&local_a0);
    app::lua_bind::KineticEnergyNormal__set_speed_impl(pKVar14,(Vector2f *)local_2c0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack448);
    lib::L2CValue::L2CValue
              ((L2CValue *)local_2c0,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_INT_TURN_FLAG);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_2c0);
    app::lua_bind::WorkModule__inc_int_impl(*ppBVar17,iVar3);
    pLVar11 = (L2CValue *)local_2c0;
  }
  lib::L2CValue::~L2CValue(pLVar11);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack432);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack432 + 0x10));
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue((L2CValue *)auStack368);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack368 + 0x10));
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  return;
}

