
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001d3f0(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  Hash40 HVar7;
  Hash40 HVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  undefined auStack192 [32];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DIDDY_STATUS_SPECIAL_LW_FLAG_ITEM_THROW);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar2 & 1U) == 0) {
    return;
  }
  lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack128,0x148478b6ee);
  pLVar4 = (L2CValue *)lib::L2CValue::as_integer(aLStack112);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(ulong)pLVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack96,fVar9);
  lib::L2CAgent::math_rad((L2CAgent *)aLStack96,pLVar4);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack96,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack112,0x16687bbcde);
  uVar5 = lib::L2CValue::as_integer(aLStack96);
  uVar6 = lib::L2CValue::as_integer(aLStack112);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack208,fVar9);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DIDDY_STATUS_SPECIAL_LW_FLAG_SMASH);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack128,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack144,0x1e97720820);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack112,fVar9);
    lib::L2CValue::operator*(aLStack208,aLStack112);
    lib::L2CValue::operator=(aLStack208,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  pLVar4 = aLStack208;
  lib::L2CValue::L2CValue(aLStack224,pLVar4);
  lib::L2CAgent::math_deg((L2CAgent *)auStack192,pLVar4);
  lib::L2CValue::L2CValue(aLStack112,0);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::ItemModule__is_have_item_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack128);
  if ((bVar2 & 1U) == 0) {
    pLVar4 = aLStack128;
  }
  else {
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::ItemModule__get_have_item_size_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack144,iVar3);
    lib::L2CValue::L2CValue(aLStack96,ITEM_SIZE_LIGHT);
    uVar5 = lib::L2CValue::operator==(aLStack144,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar5 & 1) == 0) goto LAB_710001d894;
    lib::L2CValue::L2CValue(aLStack128,0x14984b7579);
    lib::L2CValue::L2CValue(aLStack144,0);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack96,fVar9);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack160,0x1579bbe8d8);
    lib::L2CValue::L2CValue((L2CValue *)(auStack192 + 0x10),0x5ab8a01a0);
    HVar7 = lib::L2CValue::as_hash(aLStack160);
    HVar8 = lib::L2CValue::as_hash((L2CValue *)(auStack192 + 0x10));
    fVar9 = (float)app::FighterItemModuleImpl::get_fighter_throw_param_member(HVar7,HVar8);
    lib::L2CValue::L2CValue(aLStack144,fVar9);
    lib::L2CValue::operator*(aLStack144,aLStack96);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack192 + 0x10));
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack160,0x1a7219546a);
    lib::L2CValue::L2CValue((L2CValue *)(auStack192 + 0x10),0);
    uVar5 = lib::L2CValue::as_integer(aLStack160);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack192 + 0x10));
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack144,fVar9);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack192 + 0x10));
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack160,false);
    fVar9 = (float)lib::L2CValue::as_number(aLStack240);
    fVar10 = (float)lib::L2CValue::as_number(aLStack224);
    fVar11 = (float)lib::L2CValue::as_number(aLStack128);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    fVar12 = (float)lib::L2CValue::as_number(aLStack144);
    app::lua_bind::ItemModule__throw_item_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar9,fVar10,fVar11,iVar3,
               (bool)(bVar1 & 1),fVar12);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    pLVar4 = aLStack96;
  }
  lib::L2CValue::~L2CValue(pLVar4);
LAB_710001d894:
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DIDDY_STATUS_SPECIAL_LW_FLAG_ITEM_THROW);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue((L2CValue *)auStack192);
  return;
}

