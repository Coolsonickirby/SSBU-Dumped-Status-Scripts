
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMurabitoTree::status::Disappear_main_loop
          (L2CWeaponMurabitoTree *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  Hash40 HVar4;
  L2CValue *this_00;
  float fVar5;
  float fVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_MURABITO_TREE_STATUS_DISAPPEAR_WORK_FLAG_DEAD);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0x199c462b5d);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      iVar3 = 1;
      goto LAB_71000489d0;
    }
    lib::L2CValue::L2CValue(aLStack96,0x229d6298e1);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack80);
    this_00 = aLStack96;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_MURABITO_TREE_STATUS_DISAPPEAR_WORK_FLAG_DEAD);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x928166ab1);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar4 = lib::L2CValue::as_hash(aLStack80);
    fVar5 = (float)lib::L2CValue::as_number(aLStack96);
    fVar6 = (float)lib::L2CValue::as_number(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar4,fVar5,fVar6,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    this_00 = aLStack80;
  }
  lib::L2CValue::_L2CValue(this_00);
  iVar3 = 0;
LAB_71000489d0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

