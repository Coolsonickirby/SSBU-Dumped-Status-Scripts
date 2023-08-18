
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPopo::status::FinalPartner_exit(L2CFighterPopo *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  LinkAttribute LVar3;
  ulong uVar4;
  Hash40 HVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  bVar1 = app::lua_bind::LinkModule__is_model_constraint_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_40,true);
  uVar4 = lib::L2CValue::operator__(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    FUN_7100006b20(this);
    FUN_7100007040(this);
    lib::L2CValue::L2CValue(aLStack80,0x570211ebd);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    HVar5 = lib::L2CValue::as_hash(aLStack80);
    uVar6 = lib::L2CValue::as_number(aLStack96);
    uVar7 = lib::L2CValue::as_number(aLStack112);
    uVar8 = lib::L2CValue::as_number(aLStack128);
    local_40 = CONCAT44(uVar7,uVar6);
    uStack56 = (ulong)uVar8;
    app::lua_bind::ModelModule__set_joint_translate_impl
              (this->moduleAccessor,HVar5,(Vector3f *)&local_40,false,false);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_POPO_LINK_NO_PARTNER);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_40,true);
  uVar4 = lib::L2CValue::operator__(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_POPO_LINK_NO_PARTNER);
    lib::L2CValue::L2CValue(aLStack80,_LINK_ATTRIBUTE_REFERENCE_PARENT_SLOW);
    lib::L2CValue::L2CValue(aLStack96,false);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_40);
    LVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    app::lua_bind::LinkModule__set_attribute_impl
              (this->moduleAccessor,iVar2,LVar3,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

