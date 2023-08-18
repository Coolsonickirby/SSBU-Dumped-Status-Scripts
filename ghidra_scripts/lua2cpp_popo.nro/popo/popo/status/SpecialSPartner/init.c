
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPopo::status::SpecialSPartner_init(L2CFighterPopo *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  LinkAttribute LVar4;
  ulong uVar5;
  Hash40 HVar6;
  Hash40 HVar7;
  L2CValue *this_00;
  BattleObjectModuleAccessor *pBVar8;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_POPO_LINK_NO_PARTNER);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_POPO_LINK_NO_PARTNER);
    lib::L2CValue::L2CValue(aLStack96,0x31ed91fca);
    lib::L2CValue::L2CValue(aLStack112,0x31ed91fca);
    lib::L2CValue::L2CValue(aLStack128,_CONSTRAINT_FLAG_ORIENTATION | CONSTRAINT_FLAG_POSITION);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    HVar6 = lib::L2CValue::as_hash(aLStack96);
    HVar7 = lib::L2CValue::as_hash(aLStack112);
    uVar3 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::LinkModule__set_model_constraint_pos_ort_impl
              (this->moduleAccessor,iVar2,HVar6,HVar7,uVar3,true);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_POPO_LINK_NO_PARTNER);
    lib::L2CValue::L2CValue(aLStack96,_LINK_ATTRIBUTE_REFERENCE_PARENT_SLOW);
    lib::L2CValue::L2CValue(aLStack112,false);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    LVar4 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::LinkModule__set_attribute_impl
              (this->moduleAccessor,iVar2,LVar4,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_POPO_LINK_NO_PARTNER);
    lib::L2CValue::L2CValue(aLStack96,_LINK_ATTRIBUTE_ADJUST_PARENT_SHAPE);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    LVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::LinkModule__set_attribute_impl(this->moduleAccessor,iVar2,LVar4,true);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this_00);
  app::FighterSpecializer_Popo::init_lr_special_s_partner(pBVar8);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

