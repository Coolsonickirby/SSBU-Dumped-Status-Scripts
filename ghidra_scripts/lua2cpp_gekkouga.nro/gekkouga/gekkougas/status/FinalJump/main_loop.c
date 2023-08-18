
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponGekkougaGekkougas::status::FinalJump_main_loop
          (L2CWeaponGekkougaGekkougas *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  Vector4f VVar4;
  float *pfVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  float fVar8;
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
  undefined auStack176 [32];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_GEKKOUGA_GEKKOUGAS_INSTANCE_WORK_ID_FLAG_CHANGE_STATUS);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)(auStack176 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
    pfVar5 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),*pfVar5);
    lib::L2CValue::L2CValue(aLStack144,pfVar5[1]);
    lib::L2CValue::L2CValue(aLStack128,pfVar5[2]);
    pLVar7 = (L2CValue *)(auStack176 + 0x10);
    FUN_7100029660(aLStack112,this);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
    lib::L2CValue::L2CValue
              (aLStack192,_WEAPON_GEKKOUGA_GEKKOUGAS_INSTANCE_WORK_ID_FLOAT_MOVE_TARGET_X);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,fVar8);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
    lib::L2CValue::operator_(aLStack96,pLVar6);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue
              (aLStack208,_WEAPON_GEKKOUGA_GEKKOUGAS_INSTANCE_WORK_ID_FLOAT_MOVE_TARGET_Y);
    iVar3 = lib::L2CValue::as_integer(aLStack208);
    fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,fVar8);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
    lib::L2CValue::operator_(aLStack96,pLVar6);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack208);
    pLVar6 = aLStack192;
    lib::L2CAgent::math_atan((L2CAgent *)auStack176,pLVar6,pLVar7);
    lib::L2CAgent::math_deg((L2CAgent *)aLStack96,pLVar6);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator_(aLStack208,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_GEKKOUGA_GEKKOUGAS_INSTANCE_WORK_ID_FLOAT_MOVE_ANGLE);
    fVar8 = (float)lib::L2CValue::as_number(aLStack224);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::L2CValue
              (aLStack240,_WEAPON_GEKKOUGA_GEKKOUGAS_INSTANCE_WORK_ID_FLOAT_TARGET_BASE_POS_X);
    iVar3 = lib::L2CValue::as_integer(aLStack240);
    fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack224,fVar8);
    lib::L2CValue::L2CValue
              (aLStack272,_WEAPON_GEKKOUGA_GEKKOUGAS_INSTANCE_WORK_ID_FLOAT_TARGET_BASE_POS_Y);
    iVar3 = lib::L2CValue::as_integer(aLStack272);
    fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack256,fVar8);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x20,(L2CValue)0x0);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack240);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
    lib::L2CValue::L2CValue
              (aLStack304,_WEAPON_GEKKOUGA_GEKKOUGAS_INSTANCE_WORK_ID_FLOAT_MOVE_TARGET_X);
    iVar3 = lib::L2CValue::as_integer(aLStack304);
    fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack288,fVar8);
    lib::L2CValue::operator_(pLVar6,aLStack288);
    lua2cpp::L2CFighterBase::sign(this,(L2CValue)0xf0);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack304);
    fVar8 = (float)lib::L2CValue::as_number(aLStack240);
    app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar8);
    app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack288,false);
    bVar1 = lib::L2CValue::as_bool(aLStack288);
    app::FighterSpecializer_Gekkouga::set_effect_visible_group((bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lib::L2CValue::L2CValue(aLStack336,255.0);
    lib::L2CValue::as_number(aLStack288);
    lib::L2CValue::as_number(aLStack304);
    lib::L2CValue::as_number(aLStack320);
    VVar4 = lib::L2CValue::as_number(aLStack336);
    app::FighterUtil::renderer_set_clear_color(VVar4);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack176 + 0x10),_WEAPON_GEKKOUGA_GEKKOUGAS_STATUS_KIND_FINAL_ATTACK);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x60,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  return;
}

