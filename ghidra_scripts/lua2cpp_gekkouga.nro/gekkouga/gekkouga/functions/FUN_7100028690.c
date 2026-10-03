
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100028690(long param_1,L2CValue *param_2,L2CValue *param_3)

{
  byte bVar1;
  int iVar2;
  EColorKind EVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  ulong *this;
  float *pfVar8;
  ulong uVar9;
  Hash40 HVar10;
  BattleObjectModuleAccessor *pBVar11;
  BattleObjectModuleAccessor **ppBVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  undefined8 uVar18;
  long lVar19;
  undefined local_1d0 [32];
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
  undefined auStack192 [32];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  ulong local_70;
  ulong uStack104;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)local_1d0,
             _FIGHTER_GEKKOUGA_STATUS_WORK_ID_INT_QUICK_ATTACK_DIRECTION_EFFECT_HANDLE);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)local_1d0);
  ppBVar12 = (BattleObjectModuleAccessor **)(param_1 + 0x40);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar2);
  lib::L2CValue::L2CValue(aLStack128,iVar2);
  lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
  fVar13 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar12);
  lib::L2CValue::L2CValue(aLStack144,fVar13);
  fVar13 = (float)app::lua_bind::ControlModule__get_stick_y_impl(*ppBVar12);
  lib::L2CValue::L2CValue(aLStack160,fVar13);
  lib::L2CValue::L2CValue((L2CValue *)local_1d0,false);
  uVar5 = lib::L2CValue::operator==(param_2,(L2CValue *)local_1d0);
  lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,
               _FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_STICK_X);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)local_1d0,fVar13);
    lib::L2CValue::operator=(aLStack144,(L2CValue *)local_1d0);
    lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,
               _FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_STICK_Y);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)local_1d0,fVar13);
    lib::L2CValue::operator=(aLStack160,(L2CValue *)local_1d0);
    lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  }
  lib::L2CValue::operator*(aLStack144,aLStack144);
  lib::L2CValue::operator*(aLStack160,aLStack160);
  pLVar6 = (L2CValue *)auStack192;
  lib::L2CValue::operator+((L2CValue *)&local_70,pLVar6);
  lib::L2CAgent::math_sqrt((L2CAgent *)local_1d0,pLVar6);
  lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack192);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1086bc4a93);
  lib::L2CValue::L2CValue((L2CValue *)auStack192,0xaca5b425b);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  pLVar6 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)auStack192);
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar5,(ulong)pLVar6);
  lib::L2CValue::L2CValue((L2CValue *)local_1d0,fVar13);
  uVar5 = lib::L2CValue::operator<((L2CValue *)(auStack192 + 0x10),(L2CValue *)local_1d0);
  lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack192);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  if ((uVar5 & 1) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),9);
    lib::L2CValue::L2CValue((L2CValue *)local_1d0,_FIGHTER_GEKKOUGA_STATUS_KIND_SPECIAL_HI_LOOP);
    uVar5 = lib::L2CValue::operator==(pLVar7,(L2CValue *)local_1d0);
    lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_1d0,0.0);
      lib::L2CValue::operator=(aLStack144,(L2CValue *)local_1d0);
      lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
      lib::L2CValue::L2CValue((L2CValue *)local_1d0,1.0);
      lib::L2CValue::operator=(aLStack160,(L2CValue *)local_1d0);
      this = (ulong *)local_1d0;
    }
    else {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_70,
                 _FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_STICK_X);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar2);
      lib::L2CValue::L2CValue((L2CValue *)local_1d0,fVar13);
      lib::L2CValue::operator=(aLStack144,(L2CValue *)local_1d0);
      lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_70,
                 _FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_STICK_Y);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar2);
      lib::L2CValue::L2CValue((L2CValue *)local_1d0,fVar13);
      lib::L2CValue::operator=(aLStack160,(L2CValue *)local_1d0);
      lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
      this = &local_70;
    }
    lib::L2CValue::~L2CValue((L2CValue *)this);
  }
  fVar13 = (float)lib::L2CValue::as_number(aLStack144);
  fVar14 = (float)lib::L2CValue::as_number(aLStack160);
  uVar18 = app::sv_math::vec2_normalize(fVar13,fVar14);
  lib::L2CValue::L2CValue((L2CValue *)local_1d0,(float)uVar18);
  pLVar7 = (L2CValue *)(local_1d0 + 0x10);
  lib::L2CValue::L2CValue(pLVar7,(float)((ulong)uVar18 >> 0x20));
  lib::L2CValue::operator=(aLStack144,(L2CValue *)local_1d0);
  lib::L2CValue::operator=(aLStack160,pLVar7);
  lib::L2CValue::~L2CValue(pLVar7);
  lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
  lib::L2CValue::operator-(aLStack144);
  lib::L2CAgent::math_atan((L2CAgent *)local_1d0,aLStack160,pLVar6);
  lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
  pfVar8 = (float *)app::lua_bind::PostureModule__pos_impl(*ppBVar12);
  lib::L2CValue::L2CValue(aLStack256,*pfVar8);
  lib::L2CValue::L2CValue(aLStack240,pfVar8[1]);
  lib::L2CValue::L2CValue(aLStack224,pfVar8[2]);
  FUN_7100029660(aLStack208,param_1,aLStack256);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack256);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack272,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack288,0x1973677344);
  uVar5 = lib::L2CValue::as_integer(aLStack272);
  uVar9 = lib::L2CValue::as_integer(aLStack288);
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar5,uVar9);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar13);
  lib::L2CValue::operator+(pLVar6,(L2CValue *)&local_70);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
  lib::L2CValue::operator=(pLVar6,(L2CValue *)local_1d0);
  lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::L2CValue((L2CValue *)local_1d0,0x1086bc4a93);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1769153b0f);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)local_1d0);
  uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar5,uVar9);
  lib::L2CValue::L2CValue(aLStack272,fVar13);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
  lib::L2CValue::operator*(aLStack272,aLStack144);
  fVar13 = (float)app::lua_bind::PostureModule__scale_impl(*ppBVar12);
  lib::L2CValue::L2CValue(aLStack304,fVar13);
  lib::L2CValue::operator*((L2CValue *)&local_70,aLStack304);
  lib::L2CValue::operator+(pLVar6,(L2CValue *)local_1d0);
  lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
  lib::L2CValue::operator*(aLStack272,aLStack160);
  fVar13 = (float)app::lua_bind::PostureModule__scale_impl(*ppBVar12);
  lib::L2CValue::L2CValue(aLStack320,fVar13);
  lib::L2CValue::operator*((L2CValue *)&local_70,aLStack320);
  lib::L2CValue::operator+(pLVar6,(L2CValue *)local_1d0);
  lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)local_1d0,0);
  uVar5 = lib::L2CValue::operator==(aLStack128,(L2CValue *)local_1d0);
  lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    uVar9 = lib::L2CValue::as_number(aLStack288);
    lVar19 = lib::L2CValue::as_number(aLStack304);
    uVar15 = lib::L2CValue::as_number((L2CValue *)&local_70);
    local_1d0._0_8_ = (void **)(uVar9 & 0xffffffff | lVar19 << 0x20);
    local_1d0._8_8_ = (lua_State *)(ulong)uVar15;
    pLVar6 = (L2CValue *)(uVar5 & 0xffffffff);
    app::lua_bind::EffectModule__set_pos_impl(*ppBVar12,(uint)pLVar6,(Vector3f *)local_1d0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lib::L2CAgent::math_deg((L2CAgent *)auStack192,pLVar6);
    uVar15 = lib::L2CValue::as_integer(aLStack128);
    uVar5 = lib::L2CValue::as_number((L2CValue *)&local_70);
    lVar19 = lib::L2CValue::as_number(aLStack320);
    uVar16 = lib::L2CValue::as_number(aLStack336);
    local_1d0._0_8_ = (void **)(uVar5 & 0xffffffff | lVar19 << 0x20);
    local_1d0._8_8_ = (lua_State *)(ulong)uVar16;
    app::lua_bind::EffectModule__set_rot_impl(*ppBVar12,uVar15,(Vector3f *)local_1d0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack336,0xe694f9d4f);
    lib::L2CValue::L2CValue(aLStack352,0.0);
    lib::L2CValue::L2CValue(aLStack368,0.0);
    lib::L2CValue::L2CValue(aLStack384,0.0);
    lib::L2CValue::L2CValue(aLStack400,0.0);
    lib::L2CValue::L2CValue(aLStack416,1.0);
    HVar10 = lib::L2CValue::as_hash(aLStack336);
    uVar5 = lib::L2CValue::as_number(aLStack288);
    lVar19 = lib::L2CValue::as_number(aLStack304);
    uVar15 = lib::L2CValue::as_number(aLStack352);
    local_1d0._0_8_ = (void **)(uVar5 & 0xffffffff | lVar19 << 0x20);
    local_1d0._8_8_ = (lua_State *)(ulong)uVar15;
    uVar5 = lib::L2CValue::as_number(aLStack368);
    lVar19 = lib::L2CValue::as_number(aLStack384);
    uVar15 = lib::L2CValue::as_number(aLStack400);
    local_70 = uVar5 & 0xffffffff | lVar19 << 0x20;
    uStack104 = (ulong)uVar15;
    fVar13 = (float)lib::L2CValue::as_number(aLStack416);
    uVar15 = app::lua_bind::EffectModule__req_impl
                       (*ppBVar12,HVar10,(Vector3f *)local_1d0,(Vector3f *)&local_70,fVar13,0,-1,
                        false,0);
    lib::L2CValue::L2CValue(aLStack320,uVar15);
    pLVar6 = aLStack320;
    lib::L2CValue::operator=(aLStack128,pLVar6);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    fVar13 = 0.0;
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lib::L2CAgent::math_deg((L2CAgent *)auStack192,pLVar6);
    uVar15 = lib::L2CValue::as_integer(aLStack128);
    uVar5 = lib::L2CValue::as_number((L2CValue *)&local_70);
    lVar19 = lib::L2CValue::as_number(aLStack320);
    uVar16 = lib::L2CValue::as_number(aLStack336);
    local_1d0._0_8_ = (void **)(uVar5 & 0xffffffff | lVar19 << 0x20);
    local_1d0._8_8_ = (lua_State *)(ulong)uVar16;
    app::lua_bind::EffectModule__set_rot_impl(*ppBVar12,uVar15,(Vector3f *)local_1d0);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue(aLStack320);
    lib::L2CValue::L2CValue(aLStack336);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),5);
    pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
    iVar2 = app::FighterUtil::get_team_color(pBVar11);
    lib::L2CValue::L2CValue(aLStack352,iVar2);
    lib::L2CValue::L2CValue(aLStack368,0x1667e12b5a);
    EVar3 = lib::L2CValue::as_integer(aLStack352);
    HVar10 = lib::L2CValue::as_hash(aLStack368);
    uVar18 = app::FighterUtil::get_effect_team_color(EVar3,HVar10);
    lib::L2CValue::L2CValue((L2CValue *)local_1d0,(float)uVar18);
    pLVar6 = (L2CValue *)(local_1d0 + 0x10);
    lib::L2CValue::L2CValue(pLVar6,(float)((ulong)uVar18 >> 0x20));
    lib::L2CValue::L2CValue(aLStack432,fVar13);
    lib::L2CValue::operator=((L2CValue *)&local_70,(L2CValue *)local_1d0);
    lib::L2CValue::operator=(aLStack320,pLVar6);
    lib::L2CValue::operator=(aLStack336,aLStack432);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(pLVar6);
    lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack352);
    fVar13 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
    fVar14 = (float)lib::L2CValue::as_number(aLStack320);
    fVar17 = (float)lib::L2CValue::as_number(aLStack336);
    app::lua_bind::EffectModule__set_rgb_partial_last_impl(*ppBVar12,fVar13,fVar14,fVar17);
    lib::L2CValue::L2CValue
              ((L2CValue *)local_1d0,
               _FIGHTER_GEKKOUGA_STATUS_WORK_ID_INT_QUICK_ATTACK_DIRECTION_EFFECT_HANDLE);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)local_1d0);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar2,iVar4);
    lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
  }
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)local_1d0,0xe694f9d4f);
  HVar10 = lib::L2CValue::as_hash((L2CValue *)local_1d0);
  bVar1 = lib::L2CValue::as_bool(param_3);
  app::lua_bind::EffectModule__set_visible_kind_impl(*ppBVar12,HVar10,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
  lib::L2CValue::L2CValue
            ((L2CValue *)local_1d0,
             _FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLAG_DIRECTION_EFFECT_LAST_VISIBLE);
  bVar1 = lib::L2CValue::as_bool(param_3);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)local_1d0);
  app::lua_bind::WorkModule__set_flag_impl(*ppBVar12,(bool)(bVar1 & 1),iVar2);
  lib::L2CValue::~L2CValue((L2CValue *)local_1d0);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue((L2CValue *)auStack192);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack192 + 0x10));
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

