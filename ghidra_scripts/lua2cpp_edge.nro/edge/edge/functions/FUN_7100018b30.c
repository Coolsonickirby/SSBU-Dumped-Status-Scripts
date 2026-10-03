
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100018b30(void *param_1,L2CValue *param_2,L2CValue *param_3)

{
  byte bVar1;
  int iVar2;
  EColorKind EVar3;
  int iVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  float *pfVar7;
  ulong uVar8;
  ulong uVar9;
  Hash40 HVar10;
  BattleObjectModuleAccessor *pBVar11;
  L2CValue *pLVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  undefined8 uVar20;
  ulong local_1f0;
  ulong uStack488;
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
  undefined auStack192 [32];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  ulong local_70;
  ulong uStack104;
  
  lib::L2CValue::L2CValue(aLStack144,param_2);
  lib::L2CValue::L2CValue(aLStack160,param_3);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x70,(L2CValue)0x60);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue((L2CValue *)(auStack192 + 0x10),aLStack128);
  lua2cpp::L2CFighterBase::Vector2__normalize(param_1,(L2CValue)0x50);
  lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_1f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack192 + 0x10));
  lib::L2CValue::L2CValue((L2CValue *)&local_1f0,0.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,1.0);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
  pLVar12 = (L2CValue *)0x1fbdb2615;
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
  fVar13 = (float)lib::L2CValue::as_number((L2CValue *)&local_1f0);
  fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
  fVar15 = (float)lib::L2CValue::as_number(pLVar5);
  fVar16 = (float)lib::L2CValue::as_number(pLVar6);
  fVar13 = (float)app::sv_math::vec2_angle(fVar13,fVar14,fVar15,fVar16);
  lib::L2CValue::L2CValue((L2CValue *)auStack192,fVar13);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
  lib::L2CAgent::math_deg((L2CAgent *)auStack192,pLVar12);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
  lib::L2CValue::operator-(pLVar5);
  lua2cpp::L2CFighterBase::sign(param_1,(L2CValue)0x20);
  lib::L2CValue::operator*((L2CValue *)&local_70,aLStack208);
  lib::L2CValue::operator=((L2CValue *)auStack192,(L2CValue *)&local_1f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  pfVar7 = (float *)app::lua_bind::PostureModule__pos_impl
                              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack272,*pfVar7);
  lib::L2CValue::L2CValue(aLStack256,pfVar7[1]);
  lib::L2CValue::L2CValue(aLStack240,pfVar7[2]);
  FUN_7100016aa0(aLStack208,param_1,aLStack272);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack272);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack304,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack320,0x1973677344);
  uVar8 = lib::L2CValue::as_integer(aLStack304);
  uVar9 = lib::L2CValue::as_integer(aLStack320);
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar8,uVar9);
  lib::L2CValue::L2CValue(aLStack288,fVar13);
  fVar13 = (float)app::lua_bind::PostureModule__scale_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack336,fVar13);
  lib::L2CValue::operator*(aLStack288,aLStack336);
  lib::L2CValue::operator+(pLVar5,(L2CValue *)&local_70);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
  lib::L2CValue::operator=(pLVar5,(L2CValue *)&local_1f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::L2CValue((L2CValue *)&local_1f0,0x1086bc4a93);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1769153b0f);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_1f0);
  uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar8,uVar9);
  lib::L2CValue::L2CValue(aLStack288,fVar13);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
  lib::L2CValue::operator*(aLStack288,pLVar6);
  fVar13 = (float)app::lua_bind::PostureModule__scale_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack320,fVar13);
  lib::L2CValue::operator*((L2CValue *)&local_70,aLStack320);
  lib::L2CValue::operator+(pLVar5,(L2CValue *)&local_1f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
  lib::L2CValue::operator*(aLStack288,pLVar6);
  fVar13 = (float)app::lua_bind::PostureModule__scale_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack336,fVar13);
  lib::L2CValue::operator*((L2CValue *)&local_70,aLStack336);
  lib::L2CValue::operator+(pLVar5,(L2CValue *)&local_1f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_1f0,_FIGHTER_EDGE_STATUS_SPECIAL_HI_INT_DIRECTION_EFFECT_HANDLE);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1f0);
  iVar2 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack336,iVar2);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
  lib::L2CValue::L2CValue((L2CValue *)&local_1f0,_EFFECT_HANDLE_NULL);
  uVar8 = lib::L2CValue::operator==(aLStack336,(L2CValue *)&local_1f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    uVar17 = lib::L2CValue::as_integer(aLStack336);
    uVar8 = lib::L2CValue::as_number(aLStack304);
    lVar19 = lib::L2CValue::as_number(aLStack320);
    uVar18 = lib::L2CValue::as_number((L2CValue *)&local_70);
    local_1f0 = uVar8 & 0xffffffff | lVar19 << 0x20;
    uStack488 = (ulong)uVar18;
    app::lua_bind::EffectModule__set_pos_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar17,(Vector3f *)&local_1f0)
    ;
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    lib::L2CValue::L2CValue(aLStack352,0.0);
    uVar17 = lib::L2CValue::as_integer(aLStack336);
    uVar8 = lib::L2CValue::as_number((L2CValue *)&local_70);
    lVar19 = lib::L2CValue::as_number(aLStack352);
    uVar18 = lib::L2CValue::as_number((L2CValue *)auStack192);
    local_1f0 = uVar8 & 0xffffffff | lVar19 << 0x20;
    uStack488 = (ulong)uVar18;
    app::lua_bind::EffectModule__set_rot_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar17,(Vector3f *)&local_1f0)
    ;
  }
  else {
    lib::L2CValue::L2CValue(aLStack368,0x181a00e737);
    lib::L2CValue::L2CValue(aLStack384,0.0);
    lib::L2CValue::L2CValue(aLStack400,0.0);
    lib::L2CValue::L2CValue(aLStack416,0.0);
    lib::L2CValue::L2CValue(aLStack432,0.0);
    lib::L2CValue::L2CValue(aLStack448,1.0);
    HVar10 = lib::L2CValue::as_hash(aLStack368);
    uVar8 = lib::L2CValue::as_number(aLStack304);
    lVar19 = lib::L2CValue::as_number(aLStack320);
    uVar17 = lib::L2CValue::as_number(aLStack384);
    local_1f0 = uVar8 & 0xffffffff | lVar19 << 0x20;
    uStack488 = (ulong)uVar17;
    uVar8 = lib::L2CValue::as_number(aLStack400);
    lVar19 = lib::L2CValue::as_number(aLStack416);
    uVar17 = lib::L2CValue::as_number(aLStack432);
    local_70 = uVar8 & 0xffffffff | lVar19 << 0x20;
    uStack104 = (ulong)uVar17;
    fVar13 = (float)lib::L2CValue::as_number(aLStack448);
    uVar17 = app::lua_bind::EffectModule__req_impl
                       (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar10,
                        (Vector3f *)&local_1f0,(Vector3f *)&local_70,fVar13,0,-1,false,0);
    lib::L2CValue::L2CValue(aLStack352,uVar17);
    lib::L2CValue::operator=(aLStack336,aLStack352);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack448);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    fVar13 = 0.0;
    lib::L2CValue::L2CValue(aLStack352,0.0);
    uVar17 = lib::L2CValue::as_integer(aLStack336);
    uVar8 = lib::L2CValue::as_number((L2CValue *)&local_70);
    lVar19 = lib::L2CValue::as_number(aLStack352);
    uVar18 = lib::L2CValue::as_number((L2CValue *)auStack192);
    local_1f0 = uVar8 & 0xffffffff | lVar19 << 0x20;
    uStack488 = (ulong)uVar18;
    app::lua_bind::EffectModule__set_rot_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar17,(Vector3f *)&local_1f0)
    ;
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue(aLStack352);
    lib::L2CValue::L2CValue(aLStack368);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_1 + 200),5);
    pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
    iVar2 = app::FighterUtil::get_team_color(pBVar11);
    lib::L2CValue::L2CValue(aLStack384,iVar2);
    lib::L2CValue::L2CValue(aLStack400,0x1667e12b5a);
    EVar3 = lib::L2CValue::as_integer(aLStack384);
    HVar10 = lib::L2CValue::as_hash(aLStack400);
    uVar20 = app::FighterUtil::get_effect_team_color(EVar3,HVar10);
    lib::L2CValue::L2CValue((L2CValue *)&local_1f0,(float)uVar20);
    lib::L2CValue::L2CValue(aLStack480,(float)((ulong)uVar20 >> 0x20));
    lib::L2CValue::L2CValue(aLStack464,fVar13);
    lib::L2CValue::operator=((L2CValue *)&local_70,(L2CValue *)&local_1f0);
    lib::L2CValue::operator=(aLStack352,aLStack480);
    lib::L2CValue::operator=(aLStack368,aLStack464);
    lib::L2CValue::~L2CValue(aLStack464);
    lib::L2CValue::~L2CValue(aLStack480);
    lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack384);
    fVar13 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
    fVar14 = (float)lib::L2CValue::as_number(aLStack352);
    fVar15 = (float)lib::L2CValue::as_number(aLStack368);
    app::lua_bind::EffectModule__set_rgb_partial_last_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar13,fVar14,fVar15);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_1f0,_FIGHTER_EDGE_STATUS_SPECIAL_HI_INT_DIRECTION_EFFECT_HANDLE);
    iVar2 = lib::L2CValue::as_integer(aLStack336);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_1f0);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2,iVar4);
    lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
    lib::L2CValue::~L2CValue(aLStack368);
  }
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_EDGE_STATUS_SPECIAL_HI_FLAG_DIRECTION_EFFECT_VISIBLE);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_1f0,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x181a00e737);
  HVar10 = lib::L2CValue::as_hash((L2CValue *)&local_70);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_1f0);
  app::lua_bind::EffectModule__set_visible_kind_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar10,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_1f0);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue((L2CValue *)auStack192);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

