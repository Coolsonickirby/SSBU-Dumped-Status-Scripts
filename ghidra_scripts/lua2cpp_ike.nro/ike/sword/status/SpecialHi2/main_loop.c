
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponIkeSword::status::SpecialHi2_main_loop(L2CWeaponIkeSword *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  GroundCorrectKind GVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  Hash40 HVar7;
  Hash40 HVar8;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,8);
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) goto LAB_71000298e0;
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_IKE_SWORD_STATUS_SPECIAL_HI_WORK_ID_FLAG_RELEASE);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar5 = aLStack112;
LAB_7100029770:
    lib::L2CValue::_L2CValue(pLVar5);
  }
  else {
    bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar6 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      app::lua_bind::LinkModule__remove_model_constraint_impl(this->moduleAccessor,true);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_IKE_SWORD_STATUS_SPECIAL_HI_WORK_ID_FLAG_RELEASE);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
      pLVar5 = aLStack80;
      goto LAB_7100029770;
    }
  }
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_IKE_SWORD_STATUS_SPECIAL_HI_WORK_ID_FLAG_HAVE);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_LINK_NO_CONSTRAINT);
    lib::L2CValue::L2CValue(aLStack96,0x51a07c0e7);
    lib::L2CValue::L2CValue(aLStack112,0x59ae5c70f);
    lib::L2CValue::L2CValue(aLStack128,_CONSTRAINT_FLAG_ORIENTATION | CONSTRAINT_FLAG_POSITION);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    HVar7 = lib::L2CValue::as_hash(aLStack96);
    HVar8 = lib::L2CValue::as_hash(aLStack112);
    uVar3 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::LinkModule__set_model_constraint_pos_ort_impl
              (this->moduleAccessor,iVar2,HVar7,HVar8,uVar3,true);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_GROUND_CORRECT_KIND_NONE);
    GVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__set_correct_impl(this->moduleAccessor,GVar4);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_IKE_SWORD_STATUS_SPECIAL_HI_WORK_ID_FLAG_HAVE);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
  }
LAB_71000298e0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

