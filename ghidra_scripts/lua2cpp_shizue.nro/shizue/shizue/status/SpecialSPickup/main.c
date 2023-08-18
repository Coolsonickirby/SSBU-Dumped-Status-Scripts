
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterShizue::status::SpecialSPickup_main(L2CFighterShizue *this,L2CValue *return_value)

{
  undefined8 *this_00;
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  Hash40 HVar5;
  L2CTable *this_01;
  float fVar6;
  float fVar7;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  this_00 = &this[1].field_0x20;
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x12c4135857);
  lib::L2CValue::L2CValue(aLStack112,0xeb91f337c);
  lib::L2CValue::operator_(pLVar3,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xfc059e3a7);
  lib::L2CValue::L2CValue(aLStack112,0x12fb4dc6b3);
  lib::L2CValue::operator_(pLVar3,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
    uVar4 = lib::L2CValue::operator__(pLVar3,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar4 & 1) == 0) goto LAB_7100011d0c;
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xfc059e3a7);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar5 = lib::L2CValue::as_hash(pLVar3);
    fVar6 = (float)lib::L2CValue::as_number(aLStack112);
    fVar7 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar5,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_AIR_STOP);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar2);
  }
  else {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x12c4135857);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar5 = lib::L2CValue::as_hash(pLVar3);
    fVar6 = (float)lib::L2CValue::as_number(aLStack112);
    fVar7 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar5,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar2);
  }
  lib::L2CValue::_L2CValue(aLStack112);
LAB_7100011d0c:
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LINK_NO_CONSTRAINT);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar4 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LINK_NO_CONSTRAINT);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::LinkModule__unlink_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SHIZUE_GENERATE_ARTICLE_FISHINGROD);
  lib::L2CValue::L2CValue(aLStack128,0x41f1b251e);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  HVar5 = lib::L2CValue::as_hash(aLStack128);
  app::lua_bind::ArticleModule__change_motion_impl(this->moduleAccessor,iVar2,HVar5,false,-1.0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  this_01 = (L2CTable *)operator_new(0x48);
  lib::L2CTable::L2CTable(this_01,0);
  lib::L2CValue::L2CValue(aLStack112,this_01);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x6419e39fd);
  lib::L2CValue::operator_(pLVar3,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x6419e39fd);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar3,_ITEM_MURABITO_GEN_HAVE);
  lib::L2CValue::L2CValue(aLStack112,&DAT_71000227c0);
  lib::L2CValue::operator_(pLVar3,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x6419e39fd);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar3,_ITEM_MURABITO_GEN_USE);
  lib::L2CValue::L2CValue(aLStack112,&DAT_7100022820);
  lib::L2CValue::operator_(pLVar3,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x6419e39fd);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar3,_ITEM_MURABITO_GEN_SHOOT);
  lib::L2CValue::L2CValue(aLStack112,&DAT_7100022880);
  lib::L2CValue::operator_(pLVar3,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x6419e39fd);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar3,_ITEM_MURABITO_GEN_EQUIP);
  lib::L2CValue::L2CValue(aLStack112,&DAT_71000229d0);
  lib::L2CValue::operator_(pLVar3,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x6419e39fd);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar3,_ITEM_MURABITO_GEN_HAND);
  lib::L2CValue::L2CValue(aLStack112,&DAT_7100022880);
  lib::L2CValue::operator_(pLVar3,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x6419e39fd);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar3,_ITEM_MURABITO_GEN_QUICK);
  lib::L2CValue::L2CValue(aLStack112,&DAT_7100022a60);
  lib::L2CValue::operator_(pLVar3,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb0a444a09);
  lib::L2CValue::L2CValue(aLStack112,false);
  lib::L2CValue::operator_(pLVar3,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,SpecialSPickup_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

