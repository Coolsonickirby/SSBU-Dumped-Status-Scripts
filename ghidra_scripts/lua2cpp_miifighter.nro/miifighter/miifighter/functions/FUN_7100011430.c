
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100011430(L2CFighterMiifighter *this,L2CValue *return_value)

{
  char cVar1;
  undefined *puVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  float *pfVar10;
  L2CValue *pLVar11;
  L2CValue *pLVar12;
  L2CValue *pLVar13;
  ulong uVar14;
  Hash40 HVar15;
  ulong *puVar16;
  BattleObjectModuleAccessor **ppBVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  undefined8 uVar22;
  long lVar23;
  float fVar24;
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  ulong auStack480 [2];
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
  ulong local_130;
  ulong uStack296;
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  ulong auStack176 [2];
  L2CValue aLStack160 [16];
  undefined8 local_90;
  ulong uStack136;
  
  puVar2 = &stack0xffffffffffffff90;
  ppBVar17 = &this->moduleAccessor;
  iVar5 = app::lua_bind::StatusModule__status_kind_impl(*ppBVar17);
  lib::L2CValue::L2CValue(aLStack160,iVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_130,FIGHTER_STATUS_KIND_FINAL);
  uVar6 = lib::L2CValue::operator==(aLStack160,(L2CValue *)&local_130);
  lib::L2CValue::~L2CValue((L2CValue *)&local_130);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_130,_FIGHTER_MIIFIGHTER_STATUS_KIND_FINAL_HIT);
    uVar6 = lib::L2CValue::operator==(aLStack160,(L2CValue *)&local_130);
    lib::L2CValue::~L2CValue((L2CValue *)&local_130);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_130,_FIGHTER_MIIFIGHTER_STATUS_KIND_FINAL_MOVE);
      uVar6 = lib::L2CValue::operator==(aLStack160,(L2CValue *)&local_130);
      lib::L2CValue::~L2CValue((L2CValue *)&local_130);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_130,_FIGHTER_MIIFIGHTER_STATUS_KIND_FINAL_ATTACK)
        ;
        uVar6 = lib::L2CValue::operator==(aLStack160,(L2CValue *)&local_130);
        lib::L2CValue::~L2CValue((L2CValue *)&local_130);
        if ((uVar6 & 1) != 0) goto LAB_7100012ed4;
        lib::L2CValue::L2CValue((L2CValue *)&local_130,_FIGHTER_MIIFIGHTER_STATUS_KIND_FINAL_END);
        uVar6 = lib::L2CValue::operator==(aLStack160,(L2CValue *)&local_130);
        lib::L2CValue::~L2CValue((L2CValue *)&local_130);
        if ((uVar6 & 1) == 0) goto LAB_7100012ed4;
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_90,_FIGHTER_MIIFIGHTER_STATUS_FINAL_FLAG_DISABLE_GOLD_EYE);
        iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar17,iVar5);
        lib::L2CValue::L2CValue((L2CValue *)&local_130,(bool)(bVar3 & 1));
        bVar4 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_130);
        lib::L2CValue::~L2CValue((L2CValue *)&local_130);
        lib::L2CValue::~L2CValue((L2CValue *)&local_90);
        if ((bVar4 & 1U) == 0) goto LAB_7100012ed4;
        app::lua_bind::ModelModule__disable_gold_eye_impl(*ppBVar17);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_130,_FIGHTER_MIIFIGHTER_STATUS_FINAL_FLAG_DISABLE_GOLD_EYE);
        iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_130);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar17,iVar5);
        goto LAB_7100011d80;
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_130,_FIGHTER_MIIFIGHTER_STATUS_FINAL_WORK_INT_STEP)
      ;
      iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_130);
      iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar17,iVar5);
      lib::L2CValue::L2CValue((L2CValue *)auStack176,iVar5);
      lib::L2CValue::~L2CValue((L2CValue *)&local_130);
      lib::L2CValue::L2CValue(aLStack192,(L2CValue *)auStack176);
      lib::L2CValue::L2CValue((L2CValue *)&local_130,0);
      uVar6 = lib::L2CValue::operator==(aLStack192,(L2CValue *)&local_130);
      lib::L2CValue::~L2CValue((L2CValue *)&local_130);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_130,1);
        uVar6 = lib::L2CValue::operator==(aLStack192,(L2CValue *)&local_130);
        lib::L2CValue::~L2CValue((L2CValue *)&local_130);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_130,_FIGHTER_MIIFIGHTER_STATUS_FINAL_WORK_INT_WAIT_TIME);
          iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_130);
          app::lua_bind::WorkModule__inc_int_impl(*ppBVar17,iVar5);
          lib::L2CValue::~L2CValue((L2CValue *)&local_130);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_90,_FIGHTER_MIIFIGHTER_STATUS_FINAL_WORK_INT_WAIT_TIME);
          iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
          iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar17,iVar5);
          lib::L2CValue::L2CValue((L2CValue *)&local_130,iVar5);
          lib::L2CValue::L2CValue(aLStack320,0xdf05c072b);
          lib::L2CValue::L2CValue(aLStack384,0x170010a847);
          uVar6 = lib::L2CValue::as_integer(aLStack320);
          uVar14 = lib::L2CValue::as_integer(aLStack384);
          iVar5 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar17,uVar6,uVar14);
          lib::L2CValue::L2CValue(aLStack208,iVar5);
          uVar6 = lib::L2CValue::operator<=(aLStack208,(L2CValue *)&local_130);
          lib::L2CValue::~L2CValue(aLStack208);
          lib::L2CValue::~L2CValue(aLStack384);
          lib::L2CValue::~L2CValue(aLStack320);
          lib::L2CValue::~L2CValue((L2CValue *)&local_130);
          lib::L2CValue::~L2CValue((L2CValue *)&local_90);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_130,_FIGHTER_MIIFIGHTER_STATUS_FINAL_FLAG_CHANGE_STATUS);
            iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_130);
            app::lua_bind::WorkModule__on_flag_impl(*ppBVar17,iVar5);
            lib::L2CValue::~L2CValue((L2CValue *)&local_130);
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_130,_FIGHTER_MIIFIGHTER_STATUS_FINAL_WORK_INT_STEP);
            iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_130);
            app::lua_bind::WorkModule__inc_int_impl(*ppBVar17,iVar5);
            goto LAB_7100012ec0;
          }
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack224,0.0);
        lib::L2CValue::L2CValue(aLStack240,0.0);
        lib::L2CValue::L2CValue(aLStack256,0.0);
        cVar1 = (char)&stack0xfffffffffffffff0;
        lua2cpp::L2CFighterBase::Vector3__create
                  (this,(L2CValue)(cVar1 + '0'),(L2CValue)(cVar1 + ' '),(L2CValue)(cVar1 + '\x10'));
        lib::L2CValue::~L2CValue(aLStack256);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack224);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x162d277af);
        pfVar10 = (float *)app::lua_bind::PostureModule__pos_impl(*ppBVar17);
        lib::L2CValue::L2CValue((L2CValue *)&local_130,*pfVar10);
        lib::L2CValue::L2CValue(aLStack288,pfVar10[1]);
        lib::L2CValue::L2CValue(aLStack272,pfVar10[2]);
        lib::L2CValue::operator=(pLVar7,(L2CValue *)&local_130);
        lib::L2CValue::operator=(pLVar8,aLStack288);
        lib::L2CValue::operator=(pLVar9,aLStack272);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::~L2CValue((L2CValue *)&local_130);
        lib::L2CValue::L2CValue(aLStack336,0.0);
        lib::L2CValue::L2CValue(aLStack352,0.0);
        lib::L2CValue::L2CValue(aLStack368,0.0);
        lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xb0,(L2CValue)0xa0,(L2CValue)0x90);
        lib::L2CValue::~L2CValue(aLStack368);
        lib::L2CValue::~L2CValue(aLStack352);
        lib::L2CValue::~L2CValue(aLStack336);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_90,_FIGHTER_MIIFIGHTER_STATUS_FINAL_WORK_FLOAT_MOVE_TARGET_X);
        iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,iVar5);
        lib::L2CValue::L2CValue((L2CValue *)&local_130,fVar18);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack320,0x18cdc1683);
        lib::L2CValue::operator=(pLVar7,(L2CValue *)&local_130);
        lib::L2CValue::~L2CValue((L2CValue *)&local_130);
        lib::L2CValue::~L2CValue((L2CValue *)&local_90);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_90,_FIGHTER_MIIFIGHTER_STATUS_FINAL_WORK_FLOAT_MOVE_TARGET_Y);
        iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,iVar5);
        lib::L2CValue::L2CValue((L2CValue *)&local_130,fVar18);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack320,0x1fbdb2615);
        lib::L2CValue::operator=(pLVar7,(L2CValue *)&local_130);
        lib::L2CValue::~L2CValue((L2CValue *)&local_130);
        lib::L2CValue::~L2CValue((L2CValue *)&local_90);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x162d277af);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack320,0x162d277af);
        lib::L2CValue::operator=(pLVar8,pLVar7);
        lib::L2CValue::L2CValue(aLStack400,0.0);
        lib::L2CValue::L2CValue(aLStack416,0.0);
        lib::L2CValue::L2CValue(aLStack432,0.0);
        lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50);
        lib::L2CValue::~L2CValue(aLStack432);
        lib::L2CValue::~L2CValue(aLStack416);
        lib::L2CValue::~L2CValue(aLStack400);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack320,0x18cdc1683);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
        lib::L2CValue::operator-(pLVar7,pLVar8);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x18cdc1683);
        lib::L2CValue::operator=(pLVar7,(L2CValue *)&local_130);
        lib::L2CValue::~L2CValue((L2CValue *)&local_130);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack320,0x1fbdb2615);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
        lib::L2CValue::operator-(pLVar7,pLVar8);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x1fbdb2615);
        lib::L2CValue::operator=(pLVar7,(L2CValue *)&local_130);
        lib::L2CValue::~L2CValue((L2CValue *)&local_130);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack320,0x162d277af);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x162d277af);
        lib::L2CValue::operator-(pLVar7,pLVar8);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x162d277af);
        lib::L2CValue::operator=(pLVar7,(L2CValue *)&local_130);
        lib::L2CValue::~L2CValue((L2CValue *)&local_130);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x18cdc1683);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x1fbdb2615);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x162d277af);
        fVar18 = (float)lib::L2CValue::as_number(pLVar7);
        fVar19 = (float)lib::L2CValue::as_number(pLVar8);
        fVar20 = (float)lib::L2CValue::as_number(pLVar9);
        fVar18 = (float)app::sv_math::vec3_length(fVar18,fVar19,fVar20);
        lib::L2CValue::L2CValue(aLStack448,fVar18);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_130,_FIGHTER_MIIFIGHTER_STATUS_FINAL_WORK_FLOAT_MOVE_SPEED);
        iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_130);
        fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,iVar5);
        lib::L2CValue::L2CValue(aLStack464,fVar18);
        lib::L2CValue::~L2CValue((L2CValue *)&local_130);
        uVar6 = lib::L2CValue::operator<=(aLStack448,aLStack464);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack496,0.0);
          lib::L2CValue::L2CValue(aLStack512,0.0);
          fVar24 = 0.0;
          lib::L2CValue::L2CValue(aLStack528,0.0);
          lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x10,(L2CValue)0x0,(L2CValue)0xf0)
          ;
          lib::L2CValue::~L2CValue(aLStack528);
          lib::L2CValue::~L2CValue(aLStack512);
          lib::L2CValue::~L2CValue(aLStack496);
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x18cdc1683);
          pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x1fbdb2615);
          pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x162d277af);
          pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x18cdc1683);
          pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x1fbdb2615);
          pLVar13 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x162d277af);
          fVar18 = (float)lib::L2CValue::as_number(pLVar11);
          fVar19 = (float)lib::L2CValue::as_number(pLVar12);
          fVar20 = (float)lib::L2CValue::as_number(pLVar13);
          uVar22 = app::sv_math::vec3_normalize(fVar18,fVar19,fVar20);
          lib::L2CValue::L2CValue((L2CValue *)&local_130,(float)uVar22);
          lib::L2CValue::L2CValue(aLStack288,(float)((ulong)uVar22 >> 0x20));
          lib::L2CValue::L2CValue(aLStack272,fVar24);
          lib::L2CValue::operator=(pLVar7,(L2CValue *)&local_130);
          lib::L2CValue::operator=(pLVar8,aLStack288);
          lib::L2CValue::operator=(pLVar9,aLStack272);
          lib::L2CValue::~L2CValue(aLStack272);
          lib::L2CValue::~L2CValue(aLStack288);
          lib::L2CValue::~L2CValue((L2CValue *)&local_130);
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
          pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x18cdc1683);
          lib::L2CValue::operator*(pLVar8,aLStack464);
          lib::L2CValue::operator+(pLVar7,(L2CValue *)&local_90);
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
          lib::L2CValue::operator=(pLVar7,(L2CValue *)&local_130);
          lib::L2CValue::~L2CValue((L2CValue *)&local_130);
          lib::L2CValue::~L2CValue((L2CValue *)&local_90);
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
          pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x1fbdb2615);
          lib::L2CValue::operator*(pLVar8,aLStack464);
          lib::L2CValue::operator+(pLVar7,(L2CValue *)&local_90);
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
          lib::L2CValue::operator=(pLVar7,(L2CValue *)&local_130);
          lib::L2CValue::~L2CValue((L2CValue *)&local_130);
          lib::L2CValue::~L2CValue((L2CValue *)&local_90);
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x162d277af);
          pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack384,0x162d277af);
          lib::L2CValue::operator*(pLVar8,aLStack464);
          lib::L2CValue::operator+(pLVar7,(L2CValue *)&local_90);
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x162d277af);
          lib::L2CValue::operator=(pLVar7,(L2CValue *)&local_130);
          lib::L2CValue::~L2CValue((L2CValue *)&local_130);
          lib::L2CValue::~L2CValue((L2CValue *)&local_90);
          lib::L2CValue::L2CValue(aLStack560,0.0);
          lib::L2CValue::L2CValue(aLStack576,0.0);
          lib::L2CValue::L2CValue(aLStack592,0.0);
          lua2cpp::L2CFighterBase::Vector3__create
                    (this,(L2CValue)0xd0,(L2CValue)0xc0,(L2CValue)0xb0);
          lib::L2CValue::~L2CValue(aLStack592);
          lib::L2CValue::~L2CValue(aLStack576);
          lib::L2CValue::~L2CValue(aLStack560);
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack544,0x18cdc1683);
          pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack544,0x1fbdb2615);
          pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack544,0x162d277af);
          lib::L2CValue::L2CValue(aLStack608,0x31d39a761);
          pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack544,0x18cdc1683);
          pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack544,0x1fbdb2615);
          pLVar13 = (L2CValue *)lib::L2CValue::operator[](aLStack544,0x162d277af);
          HVar15 = lib::L2CValue::as_hash(aLStack608);
          uVar6 = lib::L2CValue::as_number(pLVar11);
          lVar23 = lib::L2CValue::as_number(pLVar12);
          uVar21 = lib::L2CValue::as_number(pLVar13);
          local_90 = uVar6 & 0xffffffff | lVar23 << 0x20;
          uStack136 = (ulong)uVar21;
          app::lua_bind::ModelModule__joint_rotate_impl(*ppBVar17,HVar15,(Vector3f *)&local_90);
          lib::L2CValue::L2CValue((L2CValue *)&local_130,(float)local_90);
          lib::L2CValue::L2CValue(aLStack288,local_90._4_4_);
          lib::L2CValue::L2CValue(aLStack272,(float)uStack136);
          lib::L2CValue::operator=(pLVar7,(L2CValue *)&local_130);
          lib::L2CValue::operator=(pLVar8,aLStack288);
          lib::L2CValue::operator=(pLVar9,aLStack272);
          lib::L2CValue::~L2CValue(aLStack272);
          lib::L2CValue::~L2CValue(aLStack288);
          lib::L2CValue::~L2CValue((L2CValue *)&local_130);
          lib::L2CValue::~L2CValue(aLStack608);
          lib::L2CValue::L2CValue(aLStack608,_FIGHTER_MIIFIGHTER_STATUS_FINAL_WORK_FLOAT_MOVE_ANGLE)
          ;
          iVar5 = lib::L2CValue::as_integer(aLStack608);
          fVar18 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar17,iVar5);
          lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar18);
          fVar18 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar17);
          lib::L2CValue::L2CValue(aLStack624,fVar18);
          lib::L2CValue::operator*((L2CValue *)&local_90,aLStack624);
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack544,0x18cdc1683);
          lib::L2CValue::operator=(pLVar7,(L2CValue *)&local_130);
          lib::L2CValue::~L2CValue((L2CValue *)&local_130);
          lib::L2CValue::~L2CValue(aLStack624);
          lib::L2CValue::~L2CValue((L2CValue *)&local_90);
          lib::L2CValue::~L2CValue(aLStack608);
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack544,0x18cdc1683);
          lib::L2CValue::L2CValue((L2CValue *)&local_130,0.0);
          uVar6 = lib::L2CValue::operator<(pLVar7,(L2CValue *)&local_130);
          lib::L2CValue::~L2CValue((L2CValue *)&local_130);
          if ((uVar6 & 1) == 0) {
            pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack544,0x18cdc1683);
            lib::L2CValue::L2CValue((L2CValue *)&local_130,360.0);
            uVar6 = lib::L2CValue::operator<((L2CValue *)&local_130,pLVar7);
            lib::L2CValue::~L2CValue((L2CValue *)&local_130);
            if ((uVar6 & 1) != 0) {
              pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack544,0x18cdc1683);
              lib::L2CValue::L2CValue((L2CValue *)&local_130,360.0);
              lib::L2CValue::operator-(pLVar7,(L2CValue *)&local_130);
              lib::L2CValue::~L2CValue((L2CValue *)&local_130);
              pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack544,0x18cdc1683);
              lib::L2CValue::operator=(pLVar7,(L2CValue *)&local_90);
              goto LAB_7100012d30;
            }
          }
          else {
            pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack544,0x18cdc1683);
            lib::L2CValue::L2CValue((L2CValue *)&local_130,360.0);
            lib::L2CValue::operator+(pLVar7,(L2CValue *)&local_130);
            lib::L2CValue::~L2CValue((L2CValue *)&local_130);
            pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack544,0x18cdc1683);
            lib::L2CValue::operator=(pLVar7,(L2CValue *)&local_90);
LAB_7100012d30:
            lib::L2CValue::~L2CValue((L2CValue *)&local_90);
          }
          lib::L2CValue::L2CValue((L2CValue *)&local_90,0x31d39a761);
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack544,0x18cdc1683);
          pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack544,0x1fbdb2615);
          pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack544,0x162d277af);
          HVar15 = lib::L2CValue::as_hash((L2CValue *)&local_90);
          uVar6 = lib::L2CValue::as_number(pLVar7);
          lVar23 = lib::L2CValue::as_number(pLVar8);
          uVar21 = lib::L2CValue::as_number(pLVar9);
          local_130 = uVar6 & 0xffffffff | lVar23 << 0x20;
          uStack296 = (ulong)uVar21;
          app::lua_bind::ModelModule__set_joint_rotate_impl
                    (*ppBVar17,HVar15,(Vector3f *)&local_130,0,0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_90);
          lib::L2CValue::~L2CValue(aLStack544);
          puVar16 = auStack480;
        }
        else {
          pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
          pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
          pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x162d277af);
          pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack320,0x18cdc1683);
          pLVar12 = (L2CValue *)lib::L2CValue::operator[](aLStack320,0x1fbdb2615);
          pLVar13 = (L2CValue *)lib::L2CValue::operator[](aLStack320,0x162d277af);
          lib::L2CValue::operator=(pLVar7,pLVar11);
          lib::L2CValue::operator=(pLVar8,pLVar12);
          lib::L2CValue::operator=(pLVar9,pLVar13);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_130,_FIGHTER_MIIFIGHTER_STATUS_FINAL_WORK_INT_STEP);
          iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_130);
          app::lua_bind::WorkModule__inc_int_impl(*ppBVar17,iVar5);
          puVar16 = &local_130;
        }
        lib::L2CValue::~L2CValue((L2CValue *)puVar16);
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x162d277af);
        uVar6 = lib::L2CValue::as_number(pLVar7);
        lVar23 = lib::L2CValue::as_number(pLVar8);
        uVar21 = lib::L2CValue::as_number(pLVar9);
        local_130 = uVar6 & 0xffffffff | lVar23 << 0x20;
        uStack296 = (ulong)uVar21;
        app::lua_bind::PostureModule__set_pos_impl(*ppBVar17,(Vector3f *)&local_130);
        lib::L2CValue::~L2CValue(aLStack464);
        lib::L2CValue::~L2CValue(aLStack448);
        lib::L2CValue::~L2CValue(aLStack384);
        lib::L2CValue::~L2CValue(aLStack320);
        puVar2 = &stack0xfffffffffffffff0;
LAB_7100012ec0:
        lib::L2CValue::~L2CValue((L2CValue *)(puVar2 + -0xc0));
      }
      lib::L2CValue::~L2CValue(aLStack192);
      puVar16 = auStack176;
    }
    else {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_90,_FIGHTER_MIIFIGHTER_STATUS_FINAL_FLAG_ATTACK_START);
      iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar17,iVar5);
      lib::L2CValue::L2CValue((L2CValue *)&local_130,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_130);
      lib::L2CValue::~L2CValue((L2CValue *)&local_130);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      if ((bVar4 & 1U) == 0) goto LAB_7100012ed4;
      lib::L2CValue::L2CValue((L2CValue *)&local_130,1.0);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_90,_FIGHTER_MIIFIGHTER_STATUS_FINAL_WORK_FLOAT_MOVE_FRAME);
      fVar18 = (float)lib::L2CValue::as_number((L2CValue *)&local_130);
      iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      app::lua_bind::WorkModule__sub_float_impl(*ppBVar17,fVar18,iVar5);
      lib::L2CValue::~L2CValue((L2CValue *)&local_90);
      puVar16 = &local_130;
    }
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,_FIGHTER_MIIFIGHTER_STATUS_FINAL_FLAG_DISABLE_GOLD_EYE);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar17,iVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_130,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_130);
    lib::L2CValue::~L2CValue((L2CValue *)&local_130);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    if ((bVar4 & 1U) == 0) goto LAB_7100012ed4;
    app::lua_bind::ModelModule__disable_gold_eye_impl(*ppBVar17);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_130,_FIGHTER_MIIFIGHTER_STATUS_FINAL_FLAG_DISABLE_GOLD_EYE);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_130);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar17,iVar5);
LAB_7100011d80:
    puVar16 = &local_130;
  }
  lib::L2CValue::~L2CValue((L2CValue *)puVar16);
LAB_7100012ed4:
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

