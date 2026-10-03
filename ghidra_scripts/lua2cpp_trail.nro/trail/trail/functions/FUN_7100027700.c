
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100027700(void *param_1,L2CValue *param_2,L2CValue *param_3)

{
  int iVar1;
  EColorKind EVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CAgent *this;
  L2CValue *pLVar6;
  Hash40 HVar7;
  BattleObjectModuleAccessor *pBVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  long lVar14;
  undefined8 uVar15;
  ulong local_190;
  ulong uStack392;
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
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  void **local_60;
  lua_State *plStack88;
  
  fVar9 = (float)app::lua_bind::ControlModule__get_stick_x_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack128,fVar9);
  fVar9 = (float)app::lua_bind::ControlModule__get_stick_y_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack144,fVar9);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x80,(L2CValue)0x70);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack176,aLStack112);
  lua2cpp::L2CFighterBase::Vector2__length(param_1,(L2CValue)0x50);
  lib::L2CValue::L2CValue(aLStack192,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack208,0xc7b8ee93b);
  uVar4 = lib::L2CValue::as_integer(aLStack192);
  pLVar5 = (L2CValue *)lib::L2CValue::as_integer(aLStack208);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar4,
                            (ulong)pLVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar9);
  uVar4 = lib::L2CValue::operator<=((L2CValue *)&local_60,(L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::~L2CValue(aLStack176);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_190,0);
    uVar4 = lib::L2CValue::operator==(param_2,(L2CValue *)&local_190);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
    if ((uVar4 & 1) != 0) goto LAB_7100027f60;
    iVar1 = lib::L2CValue::as_integer(param_3);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,fVar9);
    lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_190);
  }
  else {
    this = (L2CAgent *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    lib::L2CAgent::math_atan(this,pLVar6,pLVar5);
    lib::L2CAgent::math_deg((L2CAgent *)&local_60,pLVar6);
    lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_190);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,0.0);
    uVar4 = lib::L2CValue::operator<(aLStack160,(L2CValue *)&local_190);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_190,360.0);
      lib::L2CValue::operator+(aLStack160,(L2CValue *)&local_190);
      lib::L2CValue::~L2CValue((L2CValue *)&local_190);
      lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_190,0.0);
    lib::L2CValue::operator+(aLStack160,(L2CValue *)&local_190);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
    fVar9 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
    iVar1 = lib::L2CValue::as_integer(param_3);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar9,iVar1);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_190,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLAG_SEARCH_STICK);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_190);
    app::lua_bind::WorkModule__on_flag_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
  }
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::L2CValue(aLStack256,aLStack160);
  FUN_7100028280(aLStack240,param_1,aLStack256);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,aLStack240);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack224);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x70,(L2CValue)0xa0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,0);
  uVar4 = lib::L2CValue::operator==(param_2,(L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  if ((uVar4 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    uVar10 = lib::L2CValue::as_integer(param_2);
    uVar4 = lib::L2CValue::as_number(pLVar5);
    lVar14 = lib::L2CValue::as_number(pLVar6);
    uVar11 = lib::L2CValue::as_number((L2CValue *)&local_60);
    local_190 = uVar4 & 0xffffffff | lVar14 << 0x20;
    uStack392 = (ulong)uVar11;
    app::lua_bind::EffectModule__set_pos_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar10,(Vector3f *)&local_190)
    ;
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,90.0);
    lib::L2CValue::operator-(aLStack160,(L2CValue *)&local_190);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
    uVar10 = lib::L2CValue::as_integer(param_2);
    uVar4 = lib::L2CValue::as_number((L2CValue *)&local_60);
    lVar14 = lib::L2CValue::as_number(aLStack208);
    uVar11 = lib::L2CValue::as_number(aLStack272);
    local_190 = uVar4 & 0xffffffff | lVar14 << 0x20;
    uStack392 = (ulong)uVar11;
    app::lua_bind::EffectModule__set_rot_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar10,(Vector3f *)&local_190)
    ;
  }
  else {
    lib::L2CValue::L2CValue(aLStack272,0xe694f9d4f);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lib::L2CValue::L2CValue(aLStack336,0.0);
    lib::L2CValue::L2CValue(aLStack352,1.0);
    HVar7 = lib::L2CValue::as_hash(aLStack272);
    uVar4 = lib::L2CValue::as_number(pLVar5);
    lVar14 = lib::L2CValue::as_number(pLVar6);
    uVar10 = lib::L2CValue::as_number(aLStack288);
    local_190 = uVar4 & 0xffffffff | lVar14 << 0x20;
    uStack392 = (ulong)uVar10;
    uVar4 = lib::L2CValue::as_number(aLStack304);
    lVar14 = lib::L2CValue::as_number(aLStack320);
    uVar10 = lib::L2CValue::as_number(aLStack336);
    local_60 = (void **)(uVar4 & 0xffffffff | lVar14 << 0x20);
    plStack88 = (lua_State *)(ulong)uVar10;
    fVar9 = (float)lib::L2CValue::as_number(aLStack352);
    uVar10 = app::lua_bind::EffectModule__req_impl
                       (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar7,
                        (Vector3f *)&local_190,(Vector3f *)&local_60,fVar9,0,-1,false,0);
    lib::L2CValue::L2CValue(aLStack208,uVar10);
    lib::L2CValue::operator=(param_2,aLStack208);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    fVar9 = 0.0;
    lib::L2CValue::L2CValue((L2CValue *)&local_190,90.0);
    lib::L2CValue::operator-(aLStack160,(L2CValue *)&local_190);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
    uVar10 = lib::L2CValue::as_integer(param_2);
    uVar4 = lib::L2CValue::as_number((L2CValue *)&local_60);
    lVar14 = lib::L2CValue::as_number(aLStack208);
    uVar11 = lib::L2CValue::as_number(aLStack272);
    local_190 = uVar4 & 0xffffffff | lVar14 << 0x20;
    uStack392 = (ulong)uVar11;
    app::lua_bind::EffectModule__set_rot_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar10,(Vector3f *)&local_190)
    ;
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack272);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_1 + 200),5);
    pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
    iVar1 = app::FighterUtil::get_team_color(pBVar8);
    lib::L2CValue::L2CValue(aLStack288,iVar1);
    lib::L2CValue::L2CValue(aLStack304,0x1667e12b5a);
    EVar2 = lib::L2CValue::as_integer(aLStack288);
    HVar7 = lib::L2CValue::as_hash(aLStack304);
    uVar15 = app::FighterUtil::get_effect_team_color(EVar2,HVar7);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,(float)uVar15);
    lib::L2CValue::L2CValue(aLStack384,(float)((ulong)uVar15 >> 0x20));
    lib::L2CValue::L2CValue(aLStack368,fVar9);
    lib::L2CValue::operator=((L2CValue *)&local_60,(L2CValue *)&local_190);
    lib::L2CValue::operator=(aLStack208,aLStack384);
    lib::L2CValue::operator=(aLStack272,aLStack368);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack288);
    fVar9 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
    fVar12 = (float)lib::L2CValue::as_number(aLStack208);
    fVar13 = (float)lib::L2CValue::as_number(aLStack272);
    app::lua_bind::EffectModule__set_rgb_partial_last_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar9,fVar12,fVar13);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_190,_FIGHTER_TRAIL_STATUS_SPECIAL_S_INT_SEARCH_GUIDE_EFFECT_HANDLE
              );
    iVar1 = lib::L2CValue::as_integer(param_2);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  }
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue(aLStack192);
LAB_7100027f60:
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

