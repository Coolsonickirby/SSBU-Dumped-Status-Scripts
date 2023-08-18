
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGamewatch::status::SpecialHi_end(L2CFighterGamewatch *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  uint uVar6;
  long lVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  this_00 = &this->globalTable;
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
  uVar3 = lib::L2CValue::operator__(pLVar2,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack112,0xd07d69a9b);
    uVar3 = lib::L2CValue::as_integer(aLStack96);
    uVar4 = lib::L2CValue::as_integer(aLStack112);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4)
    ;
    lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar5);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
    fVar5 = (float)lib::L2CValue::as_number((L2CValue *)&local_50);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar1);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  }
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_GAMEWATCH_STATUS_KIND_SPECIAL_HI_FALL);
  uVar3 = lib::L2CValue::operator__(pLVar2,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_GAMEWATCH_GENERATE_ARTICLE_PARACHUTE);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::ArticleModule__remove_impl(this->moduleAccessor,iVar1,0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  }
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  uVar3 = lib::L2CValue::as_number(aLStack96);
  lVar7 = lib::L2CValue::as_number(aLStack112);
  uVar6 = lib::L2CValue::as_number(aLStack128);
  local_50 = uVar3 & 0xffffffff | lVar7 << 0x20;
  uStack72 = (ulong)uVar6;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_50,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_GAMEWATCH_GENERATE_ARTICLE_RESCUE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar1,0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_KIND_LANDING);
  uVar3 = lib::L2CValue::operator__(pLVar2,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
    uVar3 = lib::L2CValue::operator__(pLVar2,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar3 & 1) == 0) goto LAB_710000cfc8;
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLAG_SPECIAL_HI)
  ;
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
LAB_710000cfc8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

