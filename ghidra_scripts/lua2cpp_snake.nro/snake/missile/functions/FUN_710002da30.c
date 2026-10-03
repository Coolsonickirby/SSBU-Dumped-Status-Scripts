
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002da30(L2CValue *param_1,void *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  MotionNodeRotateCompose MVar5;
  float *pfVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  ulong *this;
  L2CValue *pLVar9;
  L2CValue *pLVar10;
  ulong uVar11;
  L2CAgent *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *this_03;
  void *pvVar12;
  WeaponSnakeMissileKineticEnergyNormal *pWVar13;
  Hash40 HVar14;
  BattleObjectModuleAccessor **ppBVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  undefined8 uVar19;
  long lVar20;
  L2CValue aLStack848 [16];
  L2CValue aLStack832 [16];
  L2CValue aLStack816 [16];
  L2CValue aLStack800 [16];
  L2CValue aLStack784 [16];
  L2CValue aLStack768 [16];
  L2CValue aLStack752 [16];
  undefined local_2e0 [32];
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
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  undefined auStack384 [32];
  undefined auStack352 [32];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined8 local_b0;
  ulong uStack168;
  ulong local_a0;
  ulong uStack152;
  ulong local_90;
  ulong uStack136;
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) goto LAB_710002efe4;
  lib::L2CValue::L2CValue
            ((L2CValue *)local_2e0,_WEAPON_SNAKE_MISSILE_INSTANCE_WORK_ID_INT_MISSILE_ID);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_2e0);
  ppBVar15 = (BattleObjectModuleAccessor **)((long)param_2 + 0x40);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar15,iVar3);
  lib::L2CValue::L2CValue(aLStack192,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
  pfVar6 = (float *)app::lua_bind::PostureModule__pos_impl(*ppBVar15);
  lib::L2CValue::L2CValue(aLStack256,*pfVar6);
  lib::L2CValue::L2CValue(aLStack240,pfVar6[1]);
  fVar18 = 0.0;
  lib::L2CValue::L2CValue(aLStack224,pfVar6[2]);
  FUN_7100018740(aLStack208,param_2,aLStack256);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,_WEAPON_SNAKE_MISSILE_INSTANCE_WORK_ID_FLAG_LOCK_ON)
  ;
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar15,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar2 & 1));
  lib::L2CValue::operator!((L2CValue *)&local_90);
  bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)local_2e0);
  lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  if ((bVar1 & 1U) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x162d277af);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,
               _WEAPON_SNAKE_MISSILE_INSTANCE_WORK_ID_FLOAT_GUIDE_POINT_OFFSET_Z);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)local_2e0,fVar16);
    uVar8 = lib::L2CValue::operator<=(pLVar7,(L2CValue *)local_2e0);
    lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_a0,
                 _WEAPON_SNAKE_MISSILE_INSTANCE_WORK_ID_INT_GUIDE_POINT_OFFSET_ID);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar15,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)local_2e0,iVar3);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)local_2e0);
      uVar19 = app::FighterSnakeFinalModule::get_guide_point_offset(iVar3,iVar4);
      lib::L2CValue::L2CValue(aLStack304,(float)uVar19);
      lib::L2CValue::L2CValue(aLStack288,(float)((ulong)uVar19 >> 0x20));
      lib::L2CValue::L2CValue(aLStack272,fVar18);
      FUN_7100018740(&local_90,param_2,aLStack304);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
      pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_90,0x18cdc1683);
      lib::L2CValue::L2CValue((L2CValue *)local_2e0,0.0);
      uVar8 = lib::L2CValue::operator==(pLVar7,(L2CValue *)local_2e0);
      lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
      if ((uVar8 & 1) == 0) {
LAB_710002dd64:
        lib::L2CValue::L2CValue
                  ((L2CValue *)local_2e0,
                   _WEAPON_SNAKE_MISSILE_INSTANCE_WORK_ID_FLOAT_GUIDE_POINT_ORIGIN_Z);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)local_2e0);
        fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_a0,fVar18);
        lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack352,
                   _WEAPON_SNAKE_MISSILE_INSTANCE_WORK_ID_FLOAT_GUIDE_POINT_ORIGIN_X);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack352);
        fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)(auStack352 + 0x10),fVar18);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_90,0x18cdc1683);
        lib::L2CValue::L2CValue((L2CValue *)local_2e0,100.0);
        lib::L2CValue::operator/(pLVar7,(L2CValue *)local_2e0);
        lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
        lib::L2CValue::operator*((L2CValue *)&local_a0,(L2CValue *)auStack384);
        lib::L2CValue::operator+((L2CValue *)(auStack352 + 0x10),(L2CValue *)(auStack384 + 0x10));
        lib::L2CValue::L2CValue((L2CValue *)local_2e0,0.0);
        lib::L2CValue::operator+(aLStack320,(L2CValue *)local_2e0);
        lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
        lib::L2CValue::L2CValue
                  ((L2CValue *)local_2e0,
                   _WEAPON_SNAKE_MISSILE_INSTANCE_WORK_ID_FLOAT_GUIDE_POINT_OFFSET_X);
        fVar18 = (float)lib::L2CValue::as_number((L2CValue *)&local_b0);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)local_2e0);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar18,iVar3);
        lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack384 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)auStack384);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack352 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)auStack352);
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack352,
                   _WEAPON_SNAKE_MISSILE_INSTANCE_WORK_ID_FLOAT_GUIDE_POINT_ORIGIN_Y);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack352);
        fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)(auStack352 + 0x10),fVar18);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_90,0x1fbdb2615);
        lib::L2CValue::L2CValue((L2CValue *)local_2e0,100.0);
        lib::L2CValue::operator/(pLVar7,(L2CValue *)local_2e0);
        lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
        lib::L2CValue::operator*((L2CValue *)&local_a0,(L2CValue *)auStack384);
        lib::L2CValue::operator+((L2CValue *)(auStack352 + 0x10),(L2CValue *)(auStack384 + 0x10));
        lib::L2CValue::L2CValue((L2CValue *)local_2e0,0.0);
        lib::L2CValue::operator+(aLStack320,(L2CValue *)local_2e0);
        lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
        lib::L2CValue::L2CValue
                  ((L2CValue *)local_2e0,
                   _WEAPON_SNAKE_MISSILE_INSTANCE_WORK_ID_FLOAT_GUIDE_POINT_OFFSET_Y);
        fVar18 = (float)lib::L2CValue::as_number((L2CValue *)&local_b0);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)local_2e0);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar18,iVar3);
        lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack384 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)auStack384);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack352 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)auStack352);
        lib::L2CValue::operator-((L2CValue *)&local_a0);
        fVar18 = 0.0;
        lib::L2CValue::L2CValue((L2CValue *)local_2e0,0.25);
        lib::L2CValue::operator*(aLStack320,(L2CValue *)local_2e0);
        lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
        lib::L2CValue::L2CValue
                  ((L2CValue *)local_2e0,
                   _WEAPON_SNAKE_MISSILE_INSTANCE_WORK_ID_FLOAT_GUIDE_POINT_OFFSET_Z);
        fVar16 = (float)lib::L2CValue::as_number((L2CValue *)&local_b0);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)local_2e0);
        app::lua_bind::WorkModule__add_float_impl(*ppBVar15,fVar16,iVar3);
        lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::L2CValue
                  ((L2CValue *)local_2e0,
                   _WEAPON_SNAKE_MISSILE_INSTANCE_WORK_ID_INT_GUIDE_POINT_OFFSET_ID);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)local_2e0);
        app::lua_bind::WorkModule__inc_int_impl(*ppBVar15,iVar3);
        lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
        this = &local_a0;
      }
      else {
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_90,0x1fbdb2615);
        fVar18 = 0.0;
        lib::L2CValue::L2CValue((L2CValue *)local_2e0,0.0);
        uVar8 = lib::L2CValue::operator==(pLVar7,(L2CValue *)local_2e0);
        lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
        if ((uVar8 & 1) == 0) goto LAB_710002dd64;
        lib::L2CValue::L2CValue
                  ((L2CValue *)local_2e0,_WEAPON_SNAKE_MISSILE_INSTANCE_WORK_ID_FLAG_LOCK_ON);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)local_2e0);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar15,iVar3);
        this = (ulong *)local_2e0;
      }
      lib::L2CValue::~L2CValue((L2CValue *)this);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    }
  }
  lib::L2CValue::L2CValue(aLStack320);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,_WEAPON_SNAKE_MISSILE_INSTANCE_WORK_ID_FLAG_LOCK_ON)
  ;
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar15,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)local_2e0,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)local_2e0);
  lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,
               _WEAPON_SNAKE_MISSILE_INSTANCE_WORK_ID_FLOAT_GUIDE_POINT_OFFSET_X);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar3);
    lib::L2CValue::L2CValue(aLStack480,fVar18);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_a0,
               _WEAPON_SNAKE_MISSILE_INSTANCE_WORK_ID_FLOAT_GUIDE_POINT_OFFSET_Y);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar3);
    lib::L2CValue::L2CValue(aLStack496,fVar18);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_b0,
               _WEAPON_SNAKE_MISSILE_INSTANCE_WORK_ID_FLOAT_GUIDE_POINT_OFFSET_Z);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_b0);
    fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar3);
    lib::L2CValue::L2CValue(aLStack512,fVar18);
    lua2cpp::L2CFighterBase::Vector3__create(param_2,(L2CValue)0x20,(L2CValue)0x10,(L2CValue)0x0);
    lib::L2CValue::operator=(aLStack320,(L2CValue *)local_2e0);
    lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
    lib::L2CValue::~L2CValue(aLStack512);
    lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
    lib::L2CValue::~L2CValue(aLStack496);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::~L2CValue(aLStack480);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  }
  else {
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    uVar19 = app::FighterSnakeFinalModule::get_lock_on_position(iVar3);
    lib::L2CValue::L2CValue(aLStack432,(float)uVar19);
    lib::L2CValue::L2CValue(aLStack416,(float)((ulong)uVar19 >> 0x20));
    lib::L2CValue::L2CValue(aLStack400,fVar18);
    FUN_7100018740(local_2e0,param_2,aLStack432);
    lib::L2CValue::operator=(aLStack320,(L2CValue *)local_2e0);
    lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack432);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x162d277af);
    pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack320,0x162d277af);
    uVar8 = lib::L2CValue::operator<=(pLVar7,pLVar9);
    if ((uVar8 & 1) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
      pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack320,0x162d277af);
      uVar8 = lib::L2CValue::as_number(pLVar7);
      lVar20 = lib::L2CValue::as_number(pLVar9);
      uVar17 = lib::L2CValue::as_number(pLVar10);
      local_2e0._0_8_ = (void **)(uVar8 & 0xffffffff | lVar20 << 0x20);
      local_2e0._8_8_ = (lua_State *)(ulong)uVar17;
      app::lua_bind::PostureModule__set_pos_impl(*ppBVar15,(Vector3f *)local_2e0);
      lib::L2CValue::L2CValue((L2CValue *)local_2e0,1.0);
      fVar18 = (float)lib::L2CValue::as_number((L2CValue *)local_2e0);
      app::lua_bind::PostureModule__set_scale_impl(*ppBVar15,fVar18,false);
      lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
      lib::L2CValue::L2CValue(aLStack448,_WEAPON_SNAKE_MISSILE_STATUS_KIND_EXPLOSION);
      lib::L2CValue::L2CValue(aLStack464,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x40,(L2CValue)0x30);
      lib::L2CValue::~L2CValue(aLStack464);
      lib::L2CValue::~L2CValue(aLStack448);
      lib::L2CValue::L2CValue(param_1,1);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack192);
      return;
    }
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_90,_WEAPON_SNAKE_MISSILE_INSTANCE_WORK_ID_FLOAT_GUIDE_POINT_ORIGIN_Z
            );
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)local_2e0,fVar18);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0xd0ec2be8d);
  lib::L2CValue::L2CValue((L2CValue *)&local_b0,0x9833fd8c4);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  uVar11 = lib::L2CValue::as_integer((L2CValue *)&local_b0);
  fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar8,uVar11);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar18);
  lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,1.0);
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack352 + 0x10),_WEAPON_SNAKE_MISSILE_INSTANCE_WORK_ID_FLAG_LOCK_ON);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack352 + 0x10));
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar15,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_b0,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_b0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack352 + 0x10));
  if ((bVar1 & 1U) == 0) {
    pLVar7 = (L2CValue *)0x162d277af;
    this_00 = (L2CAgent *)lib::L2CValue::operator[](aLStack208,0x162d277af);
    lib::L2CAgent::math_abs(this_00,pLVar7);
    lib::L2CAgent::math_abs((L2CAgent *)local_2e0,pLVar7);
    lib::L2CValue::operator/((L2CValue *)(auStack352 + 0x10),(L2CValue *)auStack352);
    lib::L2CValue::operator=((L2CValue *)&local_a0,(L2CValue *)&local_b0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack352);
    pLVar7 = (L2CValue *)(auStack352 + 0x10);
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x162d277af);
    pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack320,0x162d277af);
    lib::L2CValue::operator-(pLVar7,pLVar9);
    lib::L2CAgent::math_abs((L2CAgent *)auStack352,pLVar9);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack320,0x162d277af);
    lib::L2CValue::operator-((L2CValue *)local_2e0,pLVar7);
    lib::L2CAgent::math_abs((L2CAgent *)auStack384,pLVar7);
    lib::L2CValue::operator/((L2CValue *)(auStack352 + 0x10),(L2CValue *)(auStack384 + 0x10));
    lib::L2CValue::operator=((L2CValue *)&local_a0,(L2CValue *)&local_b0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack384 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)auStack384);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack352 + 0x10));
    pLVar7 = (L2CValue *)auStack352;
  }
  lib::L2CValue::~L2CValue(pLVar7);
  lib::L2CValue::L2CValue(aLStack528,1.0);
  lib::L2CValue::L2CValue(aLStack544,(L2CValue *)&local_90);
  lib::L2CValue::L2CValue(aLStack560,(L2CValue *)&local_a0);
  lua2cpp::L2CFighterBase::lerp(param_2,(L2CValue)0xf0,(L2CValue)0xe0,(L2CValue)0xd0);
  lib::L2CValue::~L2CValue(aLStack560);
  lib::L2CValue::~L2CValue(aLStack544);
  lib::L2CValue::~L2CValue(aLStack528);
  fVar18 = (float)lib::L2CValue::as_number((L2CValue *)&local_b0);
  app::lua_bind::PostureModule__set_scale_impl(*ppBVar15,fVar18,false);
  lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
  lib::L2CValue::L2CValue
            ((L2CValue *)local_2e0,_WEAPON_SNAKE_MISSILE_INSTANCE_WORK_ID_FLOAT_DIRECTION_X);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_2e0);
  fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar3);
  lib::L2CValue::L2CValue(aLStack576,fVar18);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_90,_WEAPON_SNAKE_MISSILE_INSTANCE_WORK_ID_FLOAT_DIRECTION_Y);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar3);
  lib::L2CValue::L2CValue(aLStack592,fVar18);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_a0,_WEAPON_SNAKE_MISSILE_INSTANCE_WORK_ID_FLOAT_DIRECTION_Z);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar3);
  lib::L2CValue::L2CValue(aLStack608,fVar18);
  lua2cpp::L2CFighterBase::Vector3__create(param_2,(L2CValue)0xc0,(L2CValue)0xb0,(L2CValue)0xa0);
  lib::L2CValue::~L2CValue(aLStack608);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue(aLStack592);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::~L2CValue(aLStack576);
  lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
  lib::L2CValue::operator-(aLStack320,aLStack208);
  lua2cpp::L2CFighterBase::Vector3__normalize(param_2,(L2CValue)0x90);
  lib::L2CValue::~L2CValue(aLStack624);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_a0,_WEAPON_SNAKE_MISSILE_INSTANCE_WORK_ID_FLOAT_ROT_SPEED);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar18);
  fVar18 = (float)app::lua_bind::BattleObjectSlow__rate_impl(FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_N);
  lib::L2CValue::L2CValue((L2CValue *)&local_b0,fVar18);
  lib::L2CValue::operator*((L2CValue *)&local_90,(L2CValue *)&local_b0);
  fVar18 = (float)app::lua_bind::SlowModule__rate_ignore_effect_impl(*ppBVar15);
  lib::L2CValue::L2CValue((L2CValue *)auStack384,fVar18);
  lib::L2CValue::operator*((L2CValue *)local_2e0,(L2CValue *)auStack384);
  lib::L2CValue::~L2CValue((L2CValue *)auStack384);
  lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue((L2CValue *)auStack384);
  lib::L2CValue::L2CValue(aLStack640);
  lib::L2CValue::L2CValue(aLStack656);
  lib::L2CValue::L2CValue(aLStack672);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(auStack352 + 0x10),0x18cdc1683);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(auStack352 + 0x10),0x1fbdb2615);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(auStack352 + 0x10),0x162d277af);
  this_01 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)auStack352,0x18cdc1683);
  this_02 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)auStack352,0x1fbdb2615);
  this_03 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)auStack352,0x162d277af);
  lib::L2CValue::L2CValue(aLStack752,0.0);
  lib::L2CValue::L2CValue(aLStack768,0.0);
  lib::L2CValue::L2CValue(aLStack784,0.0);
  uVar8 = lib::L2CValue::as_number(pLVar7);
  lVar20 = lib::L2CValue::as_number(pLVar9);
  uVar17 = lib::L2CValue::as_number(pLVar10);
  local_90 = uVar8 & 0xffffffff | lVar20 << 0x20;
  uStack136 = (ulong)uVar17;
  uVar8 = lib::L2CValue::as_number(this_01);
  lVar20 = lib::L2CValue::as_number(this_02);
  uVar17 = lib::L2CValue::as_number(this_03);
  local_a0 = uVar8 & 0xffffffff | lVar20 << 0x20;
  uStack152 = (ulong)uVar17;
  fVar18 = (float)lib::L2CValue::as_number((L2CValue *)(auStack384 + 0x10));
  uVar8 = lib::L2CValue::as_number(aLStack752);
  lVar20 = lib::L2CValue::as_number(aLStack768);
  uVar17 = lib::L2CValue::as_number(aLStack784);
  local_b0 = uVar8 & 0xffffffff | lVar20 << 0x20;
  uStack168 = (ulong)uVar17;
  fVar18 = (float)app::FighterSnakeFinalModule::get_lock_on_direction
                            ((Vector3f *)&local_90,(Vector3f *)&local_a0,fVar18,
                             (Vector3f *)&local_b0);
  lib::L2CValue::L2CValue((L2CValue *)local_2e0,fVar18);
  pLVar7 = (L2CValue *)(local_2e0 + 0x10);
  lib::L2CValue::L2CValue(pLVar7,(float)local_b0);
  lib::L2CValue::L2CValue(aLStack704,local_b0._4_4_);
  lib::L2CValue::L2CValue(aLStack688,(float)uStack168);
  lib::L2CValue::operator=((L2CValue *)auStack384,(L2CValue *)local_2e0);
  lib::L2CValue::operator=(aLStack640,pLVar7);
  lib::L2CValue::operator=(aLStack656,aLStack704);
  lib::L2CValue::operator=(aLStack672,aLStack688);
  lib::L2CValue::~L2CValue(aLStack688);
  lib::L2CValue::~L2CValue(aLStack704);
  lib::L2CValue::~L2CValue(pLVar7);
  lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
  lib::L2CValue::~L2CValue(aLStack784);
  lib::L2CValue::~L2CValue(aLStack768);
  lib::L2CValue::~L2CValue(aLStack752);
  lib::L2CValue::L2CValue((L2CValue *)local_2e0,0.0);
  lib::L2CValue::operator+(aLStack640,(L2CValue *)local_2e0);
  lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
  lib::L2CValue::L2CValue
            ((L2CValue *)local_2e0,_WEAPON_SNAKE_MISSILE_INSTANCE_WORK_ID_FLOAT_DIRECTION_X);
  fVar18 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_2e0);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar18,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)local_2e0,0.0);
  lib::L2CValue::operator+(aLStack656,(L2CValue *)local_2e0);
  lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
  lib::L2CValue::L2CValue
            ((L2CValue *)local_2e0,_WEAPON_SNAKE_MISSILE_INSTANCE_WORK_ID_FLOAT_DIRECTION_Y);
  fVar18 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_2e0);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar18,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)local_2e0,0.0);
  lib::L2CValue::operator+(aLStack672,(L2CValue *)local_2e0);
  lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
  lib::L2CValue::L2CValue
            ((L2CValue *)local_2e0,_WEAPON_SNAKE_MISSILE_INSTANCE_WORK_ID_FLOAT_DIRECTION_Z);
  fVar18 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_2e0);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar18,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)local_2e0,_WEAPON_SNAKE_MISSILE_KINETIC_ENERGY_ID_NORMAL);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_2e0);
  pvVar12 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar15,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,pvVar12);
  lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
  uVar8 = lib::L2CValue::as_number(aLStack640);
  lVar20 = lib::L2CValue::as_number(aLStack656);
  uVar17 = lib::L2CValue::as_number(aLStack672);
  local_2e0._0_8_ = (void **)(uVar8 & 0xffffffff | lVar20 << 0x20);
  local_2e0._8_8_ = (lua_State *)(ulong)uVar17;
  pWVar13 = (WeaponSnakeMissileKineticEnergyNormal *)
            lib::L2CValue::as_pointer((L2CValue *)&local_a0);
  app::lua_bind::WeaponSnakeMissileKineticEnergyNormal__set_direction_impl
            (pWVar13,(Vector3f *)local_2e0);
  lib::L2CValue::L2CValue(aLStack752,0.0);
  lib::L2CValue::L2CValue(aLStack768,0.0);
  fVar18 = 0.0;
  lib::L2CValue::L2CValue(aLStack784,1.0);
  uVar8 = lib::L2CValue::as_number(aLStack752);
  lVar20 = lib::L2CValue::as_number(aLStack768);
  uVar17 = lib::L2CValue::as_number(aLStack784);
  local_2e0._0_8_ = (void **)(uVar8 & 0xffffffff | lVar20 << 0x20);
  local_2e0._8_8_ = (lua_State *)(ulong)uVar17;
  uVar8 = lib::L2CValue::as_number(aLStack640);
  lVar20 = lib::L2CValue::as_number(aLStack656);
  uVar17 = lib::L2CValue::as_number(aLStack672);
  local_90 = uVar8 & 0xffffffff | lVar20 << 0x20;
  uStack136 = (ulong)uVar17;
  uVar19 = app::FighterSnakeFinalModule::get_lock_on_rotation
                     ((Vector3f *)local_2e0,(Vector3f *)&local_90);
  lib::L2CValue::L2CValue(aLStack832,(float)uVar19);
  lib::L2CValue::L2CValue(aLStack816,(float)((ulong)uVar19 >> 0x20));
  lib::L2CValue::L2CValue(aLStack800,fVar18);
  FUN_7100018740(&local_b0,param_2,aLStack832);
  lib::L2CValue::~L2CValue(aLStack800);
  lib::L2CValue::~L2CValue(aLStack816);
  lib::L2CValue::~L2CValue(aLStack832);
  lib::L2CValue::~L2CValue(aLStack784);
  lib::L2CValue::~L2CValue(aLStack768);
  lib::L2CValue::~L2CValue(aLStack752);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0x31ed91fca);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_b0,0x18cdc1683);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_b0,0x1fbdb2615);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_b0,0x162d277af);
  lib::L2CValue::L2CValue(aLStack752,_MOTION_NODE_ROTATE_COMPOSE_AFTER);
  HVar14 = lib::L2CValue::as_hash((L2CValue *)&local_90);
  uVar8 = lib::L2CValue::as_number(pLVar7);
  lVar20 = lib::L2CValue::as_number(pLVar9);
  uVar17 = lib::L2CValue::as_number(pLVar10);
  local_2e0._0_8_ = (void **)(uVar8 & 0xffffffff | lVar20 << 0x20);
  local_2e0._8_8_ = (lua_State *)(ulong)uVar17;
  MVar5 = lib::L2CValue::as_integer(aLStack752);
  app::lua_bind::ModelModule__set_joint_rotate_impl(*ppBVar15,HVar14,(Vector3f *)local_2e0,MVar5,0);
  lib::L2CValue::~L2CValue(aLStack752);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),8);
  lib::L2CValue::operator!(pLVar7);
  bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)local_2e0);
  lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_2e0,0xd0ec2be8d);
    lib::L2CValue::L2CValue(aLStack752,0x17e39f4957);
    uVar8 = lib::L2CValue::as_integer((L2CValue *)local_2e0);
    uVar11 = lib::L2CValue::as_integer(aLStack752);
    fVar18 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar8,uVar11);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar18);
    lib::L2CValue::~L2CValue(aLStack752);
    lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
    lib::L2CValue::operator/
              ((L2CValue *)auStack384,
               (L2CValue *)&FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SHOOT_JUMP);
    lib::L2CValue::L2CValue((L2CValue *)local_2e0,1.0);
    lib::L2CValue::operator-((L2CValue *)local_2e0,aLStack768);
    lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
    lib::L2CValue::~L2CValue(aLStack768);
    lib::L2CValue::L2CValue((L2CValue *)local_2e0,1.0);
    lib::L2CValue::operator-((L2CValue *)local_2e0,(L2CValue *)&local_90);
    lib::L2CValue::~L2CValue((L2CValue *)local_2e0);
    lib::L2CValue::operator*(aLStack848,aLStack752);
    lib::L2CValue::operator+((L2CValue *)&local_90,aLStack784);
    lib::L2CValue::operator=(aLStack752,aLStack768);
    lib::L2CValue::~L2CValue(aLStack768);
    lib::L2CValue::~L2CValue(aLStack784);
    lib::L2CValue::~L2CValue(aLStack848);
    uVar8 = lib::L2CValue::as_number(aLStack752);
    lVar20 = lib::L2CValue::as_number(aLStack752);
    uVar17 = lib::L2CValue::as_number(aLStack752);
    local_2e0._0_8_ = (void **)(uVar8 & 0xffffffff | lVar20 << 0x20);
    local_2e0._8_8_ = (lua_State *)(ulong)uVar17;
    app::lua_bind::KineticModule__mul_speed_impl(*ppBVar15,(Vector3f *)local_2e0,-1);
    lib::L2CValue::~L2CValue(aLStack752);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  }
  lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue(aLStack672);
  lib::L2CValue::~L2CValue(aLStack656);
  lib::L2CValue::~L2CValue(aLStack640);
  lib::L2CValue::~L2CValue((L2CValue *)auStack384);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack384 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack352);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack352 + 0x10));
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
LAB_710002efe4:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

