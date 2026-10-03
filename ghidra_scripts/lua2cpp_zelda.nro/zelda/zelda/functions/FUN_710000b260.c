
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710000b260(L2CFighterZelda *this,L2CValue *return_value)

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
  undefined8 local_70;
  ulong uStack104;
  
  lib::L2CValue::L2CValue(aLStack288,in_x1);
  lib::L2CValue::L2CValue(aLStack304,in_x2);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_ZELDA_GENERATE_ARTICLE_TRIFORCE);
  iVar1 = lib::L2CValue::as_integer(aLStack224);
  pvVar5 = (void *)app::lua_bind::ArticleModule__get_article_impl(this->moduleAccessor,iVar1);
  if (pvVar5 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SHIFT);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,pvVar5);
  }
  lib::L2CValue::~L2CValue(aLStack224);
  pAVar6 = (Article *)lib::L2CValue::as_pointer(aLStack128);
  uVar2 = app::lua_bind::Article__get_battle_object_id_impl(pAVar6);
  lib::L2CValue::L2CValue(aLStack144,uVar2);
  uVar2 = lib::L2CValue::as_integer(aLStack144);
  pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar2);
  if (pvVar5 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack160,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SHIFT);
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,pvVar5);
  }
  pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack160);
  pfVar8 = (float *)app::lua_bind::PostureModule__pos_impl(pBVar7);
  lib::L2CValue::L2CValue(aLStack224,*pfVar8);
  lib::L2CValue::L2CValue(aLStack208,pfVar8[1]);
  lib::L2CValue::L2CValue(aLStack192,pfVar8[2]);
  FUN_710000bf50(aLStack176,this,aLStack224);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack224);
  uVar2 = lib::L2CValue::as_integer(aLStack288);
  uVar2 = app::sv_battle_object::kind(uVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,uVar2);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_HIT_TARGET_MIDDLE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  iVar3 = lib::L2CValue::as_integer(aLStack256);
  iVar1 = app::lua_bind::FighterParamAccessor2__hit_target_no_impl
                    (LUA_SCRIPT_LINE_MAP_CORRECTION,iVar1,iVar3);
  lib::L2CValue::L2CValue(aLStack240,iVar1);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_ATTACK_ABSOLUTE_KIND_ZELDA_FINAL);
  this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
  this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
  this_02 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x162d277af);
  lib::L2CValue::L2CValue(aLStack272,0);
  iVar1 = lib::L2CValue::as_integer(aLStack256);
  uVar2 = lib::L2CValue::as_integer(aLStack288);
  uVar9 = lib::L2CValue::as_number(this_00);
  uVar10 = lib::L2CValue::as_number(this_01);
  uVar11 = lib::L2CValue::as_number(this_02);
  local_70 = CONCAT44(uVar10,uVar9);
  uStack104 = (ulong)uVar11;
  iVar3 = lib::L2CValue::as_integer(aLStack272);
  iVar4 = lib::L2CValue::as_integer(aLStack240);
  app::lua_bind::AttackModule__hit_absolute_impl
            (this->moduleAccessor,iVar1,uVar2,(Vector3f *)&local_70,iVar3,iVar4);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack304);
  app::lua_bind::WorkModule__off_flag_impl(pBVar7,iVar1);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_INSTANCE_WORK_ID_FLAG_INSTANT_DEATH_RESERVED);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack304);
  app::lua_bind::WorkModule__on_flag_impl(pBVar7,iVar1);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_ZELDA_GENERATE_ARTICLE_TRIFORCE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar1,0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  return;
}

