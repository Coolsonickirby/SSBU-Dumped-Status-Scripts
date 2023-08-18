
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponGekkougaGekkougas::status::FinalAttack_main
          (L2CWeaponGekkougaGekkougas *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  Hash40 HVar6;
  L2CValue *pLVar7;
  float fVar8;
  float fVar9;
  long lVar10;
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
  Hash40MapEntry **local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_WEAPON_GEKKOUGA_GEKKOUGAS_INSTANCE_WORK_ID_FLAG_CHANGE_STATUS);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
  uVar3 = lib::L2CValue::as_bool((L2CValue *)&local_60);
  pLVar7 = (L2CValue *)(ulong)(uVar3 & 1);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,SUB41(uVar3 & 1,0));
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  fVar8 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,fVar8);
  lib::L2CAgent::math_sqrt((L2CAgent *)aLStack112,pLVar7);
  lib::L2CValue::operator_(aLStack112,aLStack128);
  lib::L2CValue::L2CValue(aLStack192,0xf8e27ea85);
  lib::L2CValue::L2CValue(aLStack208,0x19ebe04843);
  uVar4 = lib::L2CValue::as_integer(aLStack192);
  uVar5 = lib::L2CValue::as_integer(aLStack208);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack176,fVar8);
  fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack224,fVar8);
  lib::L2CValue::operator_(aLStack176,aLStack224);
  lib::L2CValue::L2CValue(aLStack240,-7.5);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,120.0);
  lib::L2CValue::operator_((L2CValue *)&local_60,aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  uVar4 = lib::L2CValue::as_number(aLStack160);
  lVar10 = lib::L2CValue::as_number(aLStack240);
  uVar3 = lib::L2CValue::as_number(aLStack256);
  local_60 = (Hash40MapEntry **)(uVar4 & 0xffffffff | lVar10 << 0x20);
  uStack88 = (ulong)uVar3;
  app::lua_bind::CameraModule__add_camera_range_offset_impl
            (this->moduleAccessor,(Vector3f *)&local_60,0);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xcb7cea62c);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,1.0);
  lib::L2CValue::L2CValue(aLStack192,false);
  HVar6 = lib::L2CValue::as_hash((L2CValue *)&local_60);
  fVar8 = (float)lib::L2CValue::as_number(aLStack160);
  fVar9 = (float)lib::L2CValue::as_number(aLStack176);
  bVar1 = lib::L2CValue::as_bool(aLStack192);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_GEKKOUGA_GEKKOUGAS_GENERATE_ARTICLE_BUNSHIN)
  ;
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar2,false,-1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_GEKKOUGA_GEKKOUGAS_GENERATE_ARTICLE_BUNSHIN)
  ;
  lib::L2CValue::L2CValue(aLStack160,0x14aa3c0547);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  HVar6 = lib::L2CValue::as_hash(aLStack160);
  app::lua_bind::ArticleModule__change_motion_impl(this->moduleAccessor,iVar2,HVar6,false,-1.0);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_GEKKOUGA_GEKKOUGAS_GENERATE_ARTICLE_BUNSHIN)
  ;
  lib::L2CValue::L2CValue(aLStack160,false);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  app::lua_bind::ArticleModule__set_visibility_whole_impl
            (this->moduleAccessor,iVar2,(bool)(bVar1 & 1),0);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_GEKKOUGA_GEKKOUGAS_INSTANCE_WORK_ID_FLOAT_ATTACK_LR);
  iVar2 = lib::L2CValue::as_integer(aLStack160);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar8);
  fVar8 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
  app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar8);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack160);
  app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,FinalAttack_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

