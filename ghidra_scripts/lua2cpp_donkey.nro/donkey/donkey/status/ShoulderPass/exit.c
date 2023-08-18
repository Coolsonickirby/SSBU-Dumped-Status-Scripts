
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDonkey::status::ShoulderPass_exit(L2CFighterDonkey *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  long lVar4;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack80,0x7fb997a80);
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  this_00 = &this->globalTable;
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_STATUS_KIND_THROW_F_F);
  uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_STATUS_KIND_THROW_F_B);
    uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_STATUS_KIND_THROW_F_HI);
      uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) {
        pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_STATUS_KIND_THROW_F_LW);
        uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar3 & 1) == 0) {
          pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_STATUS_KIND_SHOULDER_START);
          uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar3 & 1) != 0) goto LAB_7100004fc4;
          pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_STATUS_KIND_SHOULDER_WAIT);
          uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar3 & 1) != 0) goto LAB_7100004fc4;
          pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_STATUS_KIND_SHOULDER_WALK);
          uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar3 & 1) != 0) goto LAB_7100004fc4;
          pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_STATUS_KIND_SHOULDER_TURN);
          uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar3 & 1) != 0) goto LAB_7100004fc4;
          pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_STATUS_KIND_SHOULDER_JUMP_SQUAT);
          uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar3 & 1) != 0) goto LAB_7100004fc4;
          pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_STATUS_KIND_SHOULDER_JUMP_SQUAT_B);
          uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar3 & 1) != 0) goto LAB_7100004fc4;
          pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_STATUS_KIND_SHOULDER_JUMP);
          uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar3 & 1) != 0) goto LAB_7100004fc4;
          pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_STATUS_KIND_SHOULDER_FALL);
          uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar3 & 1) != 0) goto LAB_7100004fc4;
          pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_STATUS_KIND_SHOULDER_LANDING);
          uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar3 & 1) != 0) goto LAB_7100004fc4;
          pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_STATUS_KIND_SHOULDER_PASS);
          uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar3 & 1) != 0) goto LAB_7100004fc4;
          app::lua_bind::CatchModule__catch_cut_impl(this->moduleAccessor,false,false);
          lib::L2CValue::L2CValue(aLStack80,_MA_MSC_SET_IGNORE_CATCHING);
          lib::L2CValue::L2CValue(aLStack128,false);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
          app::sv_module_access::capture(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,0xabaf8a0cc);
          lib::L2CValue::operator_(aLStack96,aLStack80);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0xa249b58ab);
        lib::L2CValue::operator_(aLStack96,aLStack80);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0x9c04494a2);
      lib::L2CValue::operator_(aLStack96,aLStack80);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0x9c72950bb);
    lib::L2CValue::operator_(aLStack96,aLStack80);
  }
  lib::L2CValue::_L2CValue(aLStack80);
LAB_7100004fc4:
  lib::L2CValue::L2CValue(aLStack80,0x7fb997a80);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_CATCH_WAIT_WORK_INT_MOTION_KIND);
    lVar4 = lib::L2CValue::as_integer(aLStack96);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack128,_MA_MSC_SET_IGNORE_CATCHING);
    lib::L2CValue::L2CValue(aLStack144,false);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
    app::sv_module_access::capture(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

