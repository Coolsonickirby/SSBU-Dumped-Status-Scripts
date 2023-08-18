
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterNess::status::AttackLw4_main(L2CFighterNess *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  float fVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_ATTACK_WORK_FLOAT_SMASH_RESTART_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  fVar3 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack64,fVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_NESS_GENERATE_ARTICLE_YOYO_HEAD);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  fVar3 = (float)lib::L2CValue::as_number(aLStack64);
  app::lua_bind::ArticleModule__set_frame_impl(this->moduleAccessor,iVar1,fVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lua2cpp::L2CFighterCommon::status_AttackLw4_common(this);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_NESS_GENERATE_ARTICLE_YOYO);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_NESS_YOYO_STATUS_KIND_TAKEUP);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::ArticleModule__change_status_impl(this->moduleAccessor,iVar1,iVar2,0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_NESS_GENERATE_ARTICLE_YOYO_HEAD);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_NESS_YOYO_HEAD_STATUS_KIND_TAKEUP);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::ArticleModule__change_status_impl(this->moduleAccessor,iVar1,iVar2,0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,AttackLw4_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

