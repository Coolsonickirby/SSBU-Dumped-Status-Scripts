
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100230210(void *param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  undefined8 *this;
  void *pvVar10;
  ulong uVar11;
  BattleObjectModuleAccessor *pBVar12;
  KineticEnergy *pKVar13;
  L2CValue *pLVar14;
  L2CValue *pLVar15;
  L2CValue *pLVar16;
  BattleObjectModuleAccessor **ppBVar17;
  float fVar18;
  float fVar19;
  long lVar20;
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
  undefined8 auStack192 [2];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  ulong local_80;
  ulong uStack120;
  undefined8 local_70;
  ulong uStack104;
  
  ppBVar17 = (BattleObjectModuleAccessor **)((long)param_1 + 0x40);
  iVar4 = app::lua_bind::StatusModule__status_kind_impl(*ppBVar17);
  lib::L2CValue::L2CValue(aLStack336,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_EAT_WAIT);
  uVar7 = lib::L2CValue::operator==(aLStack336,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_EAT_WAIT_JUMP);
    uVar7 = lib::L2CValue::operator==(aLStack336,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    if ((uVar7 & 1) != 0) goto LAB_71002302cc;
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_EAT_WALK);
    uVar7 = lib::L2CValue::operator==(aLStack336,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    if ((uVar7 & 1) != 0) goto LAB_71002302cc;
  }
  else {
LAB_71002302cc:
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_80,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_SWALLOWED_STICK_ON);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar17,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_80);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      cVar1 = (char)&stack0xfffffffffffffff0;
      lua2cpp::L2CFighterBase::Vector2__create
                (param_1,(L2CValue)(cVar1 + 'p'),(L2CValue)(cVar1 + '`'));
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x18cdc1683);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x1fbdb2615);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_80,
                 _FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_FLOAT_EAT_WAIT_SWALLOWED_STICK_X);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar18);
      lib::L2CValue::L2CValue
                (aLStack208,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_FLOAT_EAT_WAIT_SWALLOWED_STICK_Y);
      iVar4 = lib::L2CValue::as_integer(aLStack208);
      fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)auStack192,fVar18);
      lib::L2CValue::operator=(pLVar8,(L2CValue *)&local_70);
      lib::L2CValue::operator=(pLVar9,(L2CValue *)auStack192);
      lib::L2CValue::~L2CValue((L2CValue *)auStack192);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      lib::L2CValue::~L2CValue((L2CValue *)&local_80);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x1fbdb2615);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
      uVar7 = lib::L2CValue::operator<((L2CValue *)&local_70,pLVar8);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      if ((uVar7 & 1) == 0) {
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x1fbdb2615);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
        uVar7 = lib::L2CValue::operator<(pLVar8,(L2CValue *)&local_70);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        if ((uVar7 & 1) == 0) {
          pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x18cdc1683);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
          uVar7 = lib::L2CValue::operator==(pLVar8,(L2CValue *)&local_70);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          if ((uVar7 & 1) == 0) {
            iVar4 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar17);
            lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar4);
            lib::L2CValue::L2CValue((L2CValue *)&local_70,_SITUATION_KIND_GROUND);
            uVar7 = lib::L2CValue::operator==((L2CValue *)&local_80,(L2CValue *)&local_70);
            lib::L2CValue::~L2CValue((L2CValue *)&local_70);
            lib::L2CValue::~L2CValue((L2CValue *)&local_80);
            if ((uVar7 & 1) != 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_KINETIC_ENERGY_ID_STOP);
              iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
              pvVar10 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar17,iVar4);
              lib::L2CValue::L2CValue((L2CValue *)auStack192,pvVar10);
              lib::L2CValue::~L2CValue((L2CValue *)&local_70);
              lib::L2CValue::L2CValue(aLStack224,0.0);
              lib::L2CValue::L2CValue(aLStack240,0.0);
              lua2cpp::L2CFighterBase::Vector2__create
                        (param_1,(L2CValue)(cVar1 + '0'),(L2CValue)(cVar1 + ' '));
              lib::L2CValue::~L2CValue(aLStack240);
              lib::L2CValue::~L2CValue(aLStack224);
              pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
              pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
              lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
              lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
              lib::L2CValue::operator=(pLVar8,(L2CValue *)&local_70);
              lib::L2CValue::operator=(pLVar9,(L2CValue *)&local_80);
              lib::L2CValue::~L2CValue((L2CValue *)&local_80);
              lib::L2CValue::~L2CValue((L2CValue *)&local_70);
              lib::L2CValue::L2CValue(aLStack256,0xf899192aa);
              lib::L2CValue::L2CValue(aLStack272,0x167e7c3c6a);
              uVar7 = lib::L2CValue::as_integer(aLStack256);
              uVar11 = lib::L2CValue::as_integer(aLStack272);
              fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                        (*ppBVar17,uVar7,uVar11);
              lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar18);
              pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x18cdc1683);
              lib::L2CValue::L2CValue(aLStack304,pLVar8);
              lua2cpp::L2CFighterBase::sign(param_1,(L2CValue)0xd0);
              lib::L2CValue::operator*((L2CValue *)&local_80,aLStack288);
              pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
              lib::L2CValue::operator=(pLVar8,(L2CValue *)&local_70);
              lib::L2CValue::~L2CValue((L2CValue *)&local_70);
              lib::L2CValue::~L2CValue(aLStack288);
              lib::L2CValue::~L2CValue(aLStack304);
              lib::L2CValue::~L2CValue((L2CValue *)&local_80);
              lib::L2CValue::~L2CValue(aLStack272);
              lib::L2CValue::~L2CValue(aLStack256);
              lib::L2CValue::L2CValue(aLStack256,ENERGY_STOP_RESET_TYPE_GROUND);
              pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
              pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
              lib::L2CValue::L2CValue(aLStack272,0.0);
              lib::L2CValue::L2CValue(aLStack288,0.0);
              lib::L2CValue::L2CValue(aLStack320,0.0);
              pLVar14 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_1 + 200),5);
              iVar4 = lib::L2CValue::as_integer(aLStack256);
              uVar7 = lib::L2CValue::as_number(pLVar8);
              uVar6 = lib::L2CValue::as_number(pLVar9);
              local_70 = uVar7 & 0xffffffff | (ulong)uVar6 << 0x20;
              uStack104 = 0;
              uVar7 = lib::L2CValue::as_number(aLStack272);
              lVar20 = lib::L2CValue::as_number(aLStack288);
              uVar6 = lib::L2CValue::as_number(aLStack320);
              local_80 = uVar7 & 0xffffffff | lVar20 << 0x20;
              uStack120 = (ulong)uVar6;
              pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar14);
              pKVar13 = (KineticEnergy *)lib::L2CValue::as_pointer((L2CValue *)auStack192);
              app::lua_bind::KineticEnergy__reset_energy_impl
                        (pKVar13,iVar4,(Vector2f *)&local_70,(Vector3f *)&local_80,pBVar12);
              lib::L2CValue::~L2CValue(aLStack320);
              lib::L2CValue::~L2CValue(aLStack288);
              lib::L2CValue::~L2CValue(aLStack272);
              lib::L2CValue::~L2CValue(aLStack256);
              pKVar13 = (KineticEnergy *)lib::L2CValue::as_pointer((L2CValue *)auStack192);
              app::lua_bind::KineticEnergy__enable_impl(pKVar13);
              lib::L2CValue::~L2CValue(aLStack208);
              this = auStack192;
              goto LAB_7100230568;
            }
          }
        }
        else {
          bVar2 = app::lua_bind::GroundModule__is_passable_ground_impl(*ppBVar17);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar2 & 1));
          bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_70);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          if ((bVar3 & 1U) != 0) {
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_70,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_EAT_PASS);
            lib::L2CValue::L2CValue((L2CValue *)&local_80,false);
            lua2cpp::L2CFighterBase::change_status
                      (param_1,(L2CValue)(cVar1 + -0x60),(L2CValue)(cVar1 + -0x70));
            goto LAB_710023055c;
          }
        }
      }
      else {
        iVar4 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar17);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,_SITUATION_KIND_GROUND);
        uVar7 = lib::L2CValue::operator==((L2CValue *)&local_80,(L2CValue *)&local_70);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        lib::L2CValue::~L2CValue((L2CValue *)&local_80);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_70,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_EAT_WAIT_JUMP);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,false);
          lua2cpp::L2CFighterBase::change_status
                    (param_1,(L2CValue)(cVar1 + -0x60),(L2CValue)(cVar1 + -0x70));
LAB_710023055c:
          lib::L2CValue::~L2CValue((L2CValue *)&local_80);
          this = &local_70;
LAB_7100230568:
          lib::L2CValue::~L2CValue((L2CValue *)this);
        }
      }
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack192,_FIGHTER_KIRBY_STATUS_SPECIAL_N_FLAG_SWALLOWED_STICK_ON);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack192);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar17,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)auStack192);
      lib::L2CValue::~L2CValue(aLStack144);
    }
  }
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_INT_SWALLOWED_FLICK_TIMER)
  ;
  iVar4 = lib::L2CValue::as_integer(aLStack144);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar17,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0);
  uVar7 = lib::L2CValue::operator<=((L2CValue *)&local_80,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_80);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack352,0.0);
    lib::L2CValue::L2CValue(aLStack368,0.0);
    lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack352);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_80,0x18cdc1683);
    pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_80,0x1fbdb2615);
    lib::L2CValue::L2CValue
              (aLStack144,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_FLOAT_SWALLOWED_FLICK_OFFSET_X);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar18);
    lib::L2CValue::L2CValue
              (aLStack176,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_FLOAT_SWALLOWED_FLICK_OFFSET_Y);
    iVar4 = lib::L2CValue::as_integer(aLStack176);
    fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,iVar4);
    lib::L2CValue::L2CValue(aLStack160,fVar18);
    lib::L2CValue::operator=(pLVar8,(L2CValue *)&local_70);
    lib::L2CValue::operator=(pLVar9,aLStack160);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack144);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_80,0x18cdc1683);
    pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_80,0x1fbdb2615);
    fVar18 = (float)lib::L2CValue::as_number(pLVar8);
    fVar19 = (float)lib::L2CValue::as_number(pLVar9);
    fVar18 = (float)app::sv_math::vec2_length(fVar18,fVar19);
    lib::L2CValue::L2CValue(aLStack144,fVar18);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.5);
    uVar7 = lib::L2CValue::operator<((L2CValue *)&local_70,aLStack144);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((uVar7 & 1) == 0) {
      app::lua_bind::ShakeModule__disable_offset_impl(*ppBVar17);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,10);
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_INT_SWALLOWED_FLICK_TIMER);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      iVar5 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar17,iVar4,iVar5);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_80,0x18cdc1683);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_70,
                 _FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_FLOAT_SWALLOWED_FLICK_OFFSET_X_PREV);
      fVar18 = (float)lib::L2CValue::as_number(pLVar8);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar17,fVar18,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_80,0x1fbdb2615);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_70,
                 _FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_FLOAT_SWALLOWED_FLICK_OFFSET_Y_PREV);
      fVar18 = (float)lib::L2CValue::as_number(pLVar8);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar17,fVar18,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_FLOAT_SWALLOWED_FLICK_OFFSET_X);
      fVar18 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar17,fVar18,iVar4);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_FLOAT_SWALLOWED_FLICK_OFFSET_Y);
      fVar18 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar17,fVar18,iVar4);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    }
    goto LAB_71002311f8;
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_INT_SWALLOWED_FLICK_TIMER);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar17,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar4);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue(aLStack144,GROUND_TOUCH_FLAG_DOWN);
  uVar6 = lib::L2CValue::as_integer(aLStack144);
  bVar2 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar17,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_70);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lVar20 = -0x80;
LAB_7100230dcc:
    lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar20));
  }
  else {
    bVar2 = app::lua_bind::GroundModule__is_passable_ground_impl(*ppBVar17);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar2 & 1));
    lib::L2CValue::operator!(aLStack176);
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack160);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_FLOAT_SWALLOWED_FLICK_OFFSET_Y_PREV
                );
      fVar18 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar17,fVar18,iVar4);
      lib::L2CValue::~L2CValue(aLStack144);
      lVar20 = -0x60;
      goto LAB_7100230dcc;
    }
  }
  lib::L2CValue::L2CValue(aLStack384,0.0);
  lib::L2CValue::L2CValue(aLStack400,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x80,(L2CValue)0x70);
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue(aLStack384);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x18cdc1683);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x1fbdb2615);
  lib::L2CValue::L2CValue
            (aLStack160,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_FLOAT_SWALLOWED_FLICK_OFFSET_X_PREV);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar18);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack192,
             _FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_FLOAT_SWALLOWED_FLICK_OFFSET_Y_PREV);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack192);
  fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,iVar4);
  lib::L2CValue::L2CValue(aLStack176,fVar18);
  lib::L2CValue::operator=(pLVar8,(L2CValue *)&local_70);
  lib::L2CValue::operator=(pLVar9,aLStack176);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue((L2CValue *)auStack192);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,(L2CValue *)&local_80);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,5.0);
  uVar7 = lib::L2CValue::operator<((L2CValue *)&local_70,(L2CValue *)&local_80);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,10);
    lib::L2CValue::operator-((L2CValue *)&local_70,(L2CValue *)&local_80);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::operator=(aLStack160,aLStack176);
    lib::L2CValue::~L2CValue(aLStack176);
  }
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x18cdc1683);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x1fbdb2615);
  pLVar14 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x18cdc1683);
  pLVar15 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x1fbdb2615);
  lib::L2CValue::operator*(pLVar15,aLStack160);
  lib::L2CValue::operator=(pLVar8,pLVar14);
  lib::L2CValue::operator=(pLVar9,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue(aLStack416,0.0);
  lib::L2CValue::L2CValue(aLStack432,0.0);
  lib::L2CValue::L2CValue(aLStack448,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40);
  lib::L2CValue::~L2CValue(aLStack448);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::~L2CValue(aLStack416);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
  pLVar14 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x162d277af);
  pLVar15 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x18cdc1683);
  pLVar16 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
  lib::L2CValue::operator=(pLVar8,pLVar15);
  lib::L2CValue::operator=(pLVar9,pLVar16);
  lib::L2CValue::operator=(pLVar14,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
  pLVar14 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x162d277af);
  uVar7 = lib::L2CValue::as_number(pLVar8);
  lVar20 = lib::L2CValue::as_number(pLVar9);
  uVar6 = lib::L2CValue::as_number(pLVar14);
  local_70 = uVar7 & 0xffffffff | lVar20 << 0x20;
  uStack104 = (ulong)uVar6;
  app::lua_bind::ShakeModule__enable_offset_impl(*ppBVar17,(Vector3f *)&local_70);
  lib::L2CValue::L2CValue(aLStack496,(float)local_70);
  lib::L2CValue::L2CValue(aLStack480,local_70._4_4_);
  lib::L2CValue::L2CValue(aLStack464,(float)uStack104);
  lib::L2CValue::~L2CValue(aLStack464);
  lib::L2CValue::~L2CValue(aLStack480);
  lib::L2CValue::~L2CValue(aLStack496);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_KIRBY_STATUS_SPECIAL_N_WORK_INT_SWALLOWED_FLICK_TIMER);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__dec_int_impl(*ppBVar17,iVar4);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
LAB_71002311f8:
  lib::L2CValue::~L2CValue((L2CValue *)&local_80);
  return;
}

