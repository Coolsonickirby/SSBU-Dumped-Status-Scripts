
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMario::status::SpecialLwShoot_init(L2CFighterMario *this,L2CValue *return_value)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  Article *pAVar6;
  BattleObjectModuleAccessor *pBVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_MARIO_INSTANCE_WORK_ID_INT_SPECIAL_LW_CHARGE);
  iVar1 = lib::L2CValue::as_integer(aLStack144);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,iVar1);
  lib::L2CValue::operator_(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack160,0x17e41b2f1e);
  uVar3 = lib::L2CValue::as_integer(aLStack144);
  uVar4 = lib::L2CValue::as_integer(aLStack160);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,iVar1);
  lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::operator_(aLStack80,aLStack128);
  lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_MARIO_GENERATE_ARTICLE_PUMP);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  pvVar5 = (void *)app::lua_bind::ArticleModule__get_article_impl(this->moduleAccessor,iVar1);
  if (pvVar5 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack144,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,pvVar5);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  uVar3 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  if ((uVar3 & 1) == 0) {
    pAVar6 = (Article *)lib::L2CValue::as_pointer(aLStack144);
    uVar2 = app::lua_bind::Article__get_battle_object_id_impl(pAVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,uVar2);
    uVar2 = lib::L2CValue::as_integer((L2CValue *)&local_40);
    pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar2);
    if (pvVar5 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack160,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,pvVar5);
    }
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack160);
    fVar8 = (float)lib::L2CValue::as_number(aLStack96);
    app::WeaponSpecializer_MarioPump::set_charge(pBVar7,fVar8);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  }
  lib::L2CValue::L2CValue(aLStack176,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack192,0x14080324fd);
  uVar3 = lib::L2CValue::as_integer(aLStack176);
  uVar4 = lib::L2CValue::as_integer(aLStack192);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack160,fVar8);
  lib::L2CValue::operator_(aLStack80,aLStack160);
  lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::operator_(aLStack112);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  uVar9 = lib::L2CValue::as_number(aLStack160);
  uVar10 = lib::L2CValue::as_number(aLStack176);
  uVar2 = lib::L2CValue::as_number(aLStack192);
  local_40 = CONCAT44(uVar10,uVar9);
  uStack56 = (ulong)uVar2;
  app::lua_bind::KineticModule__add_speed_impl(this->moduleAccessor,(Vector3f *)&local_40);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

