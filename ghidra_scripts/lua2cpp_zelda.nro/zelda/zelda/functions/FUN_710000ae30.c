
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710000ae30(L2CFighterZelda *this,L2CValue *return_value)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  Article *pAVar6;
  BattleObjectModuleAccessor *pBVar7;
  float *pfVar8;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *in_x1;
  L2CValue *in_x2;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
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
  undefined8 local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack272,in_x1);
  lib::L2CValue::L2CValue(aLStack288,in_x2);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_ZELDA_GENERATE_ARTICLE_TRIFORCE);
  iVar1 = lib::L2CValue::as_integer(aLStack208);
  pvVar5 = (void *)app::lua_bind::ArticleModule__get_article_impl(this->moduleAccessor,iVar1);
  if (pvVar5 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack112,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SHIFT);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,pvVar5);
  }
  lib::L2CValue::~L2CValue(aLStack208);
  pAVar6 = (Article *)lib::L2CValue::as_pointer(aLStack112);
  uVar2 = app::lua_bind::Article__get_battle_object_id_impl(pAVar6);
  lib::L2CValue::L2CValue(aLStack128,uVar2);
  uVar2 = lib::L2CValue::as_integer(aLStack128);
  pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar2);
  if (pvVar5 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack144,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SHIFT);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,pvVar5);
  }
  pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
  pfVar8 = (float *)app::lua_bind::PostureModule__pos_impl(pBVar7);
  lib::L2CValue::L2CValue(aLStack208,*pfVar8);
  lib::L2CValue::L2CValue(aLStack192,pfVar8[1]);
  lib::L2CValue::L2CValue(aLStack176,pfVar8[2]);
  FUN_710000bf50(aLStack160,this,aLStack208);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack208);
  uVar2 = lib::L2CValue::as_integer(aLStack272);
  uVar2 = app::sv_battle_object::kind(uVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,uVar2);
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_HIT_TARGET_MIDDLE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar3 = lib::L2CValue::as_integer(aLStack240);
  iVar1 = app::lua_bind::FighterParamAccessor2__hit_target_no_impl
                    (LUA_SCRIPT_LINE_MAP_CORRECTION,iVar1,iVar3);
  lib::L2CValue::L2CValue(aLStack224,iVar1);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_ATTACK_ABSOLUTE_KIND_ZELDA_FINAL);
  this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
  this_02 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
  lib::L2CValue::L2CValue(aLStack256,0);
  iVar1 = lib::L2CValue::as_integer(aLStack240);
  uVar2 = lib::L2CValue::as_integer(aLStack272);
  uVar9 = lib::L2CValue::as_number(this_00);
  uVar10 = lib::L2CValue::as_number(this_01);
  uVar11 = lib::L2CValue::as_number(this_02);
  local_60 = CONCAT44(uVar10,uVar9);
  uStack88 = (ulong)uVar11;
  iVar3 = lib::L2CValue::as_integer(aLStack256);
  iVar4 = lib::L2CValue::as_integer(aLStack224);
  app::lua_bind::AttackModule__hit_absolute_impl
            (this->moduleAccessor,iVar1,uVar2,(Vector3f *)&local_60,iVar3,iVar4);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  return;
}

