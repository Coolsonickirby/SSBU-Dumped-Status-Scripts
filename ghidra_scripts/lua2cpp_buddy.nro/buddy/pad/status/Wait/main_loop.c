
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponBuddyPad::status::Wait_main_loop(L2CWeaponBuddyPad *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  Hash40 HVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar2 & 1U) == 0) goto LAB_71000374a0;
      lib::L2CValue::L2CValue(aLStack80,0x47dee83e5);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::L2CValue(aLStack112,1.0);
      lib::L2CValue::L2CValue(aLStack128,false);
      HVar6 = lib::L2CValue::as_hash(aLStack80);
      fVar7 = (float)lib::L2CValue::as_number(aLStack96);
      fVar8 = (float)lib::L2CValue::as_number(aLStack112);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      goto LAB_71000373dc;
    }
    lib::L2CValue::L2CValue(aLStack96,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar4 = aLStack96;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_BUDDY_PAD_STATUS_KIND_FALL);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
LAB_71000373dc:
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar4 = aLStack80;
  }
  lib::L2CValue::_L2CValue(pLVar4);
LAB_71000374a0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

