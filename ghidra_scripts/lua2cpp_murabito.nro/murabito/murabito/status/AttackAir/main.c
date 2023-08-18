
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMurabito::status::AttackAir_main(L2CFighterMurabito *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  Hash40 HVar8;
  L2CValue *this_00;
  float fVar9;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lua2cpp::L2CFighterCommon::sub_attack_air(this);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_STATUS_ATTACK_AIR_WORK_INT_MOTION_KIND);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  lVar5 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,lVar5);
  lib::L2CValue::operator_(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack64,0xdde67d935);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0xd40042152);
    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar6 & 1) != 0) goto LAB_7100009f18;
    lib::L2CValue::L2CValue(aLStack64,0xc3495ada5);
    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,0xc33f869bc);
      uVar6 = lib::L2CValue::operator__(aLStack96,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar6 & 1) == 0) goto LAB_710000a378;
    }
    lib::L2CValue::L2CValue(aLStack192,0x20cbc92683);
    lib::L2CValue::L2CValue(aLStack208,1);
    lib::L2CValue::L2CValue(aLStack224,_FIGHTER_LOG_DATA_INT_SHOOT_NUM);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    this_00 = aLStack192;
  }
  else {
LAB_7100009f18:
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_MURABITO_INSTANCE_WORK_ID_FLAG_MELEE_NO_RANDOM);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack192,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack208,0x18423a654b);
      uVar6 = lib::L2CValue::as_integer(aLStack192);
      uVar7 = lib::L2CValue::as_integer(aLStack208);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack64,fVar9);
      lib::L2CValue::operator_(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue(aLStack192,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack208,0x18db3334f1);
      uVar6 = lib::L2CValue::as_integer(aLStack192);
      uVar7 = lib::L2CValue::as_integer(aLStack208);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack64,fVar9);
      lib::L2CValue::operator_(aLStack160,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue(aLStack192,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack208,0x18ac340467);
      uVar6 = lib::L2CValue::as_integer(aLStack192);
      uVar7 = lib::L2CValue::as_integer(aLStack208);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack64,fVar9);
      lib::L2CValue::operator_(aLStack128,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::operator_(aLStack80,aLStack160);
      lib::L2CValue::operator_(aLStack192,aLStack128);
      lib::L2CValue::operator_(aLStack144,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::operator_(aLStack80,aLStack144);
      lib::L2CValue::operator_(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::operator_(aLStack160,aLStack144);
      lib::L2CValue::operator_(aLStack160,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack192,0x77a08c3fc);
      HVar8 = lib::L2CValue::as_hash(aLStack192);
      fVar9 = (float)app::sv_math::randf(HVar8,1.0);
      lib::L2CValue::L2CValue(aLStack64,fVar9);
      lib::L2CValue::operator_(aLStack112,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack192);
      uVar6 = lib::L2CValue::operator_(aLStack112,aLStack80);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::operator_(aLStack80,aLStack160);
        uVar6 = lib::L2CValue::operator_(aLStack112,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,3);
          lib::L2CValue::operator_(aLStack176,aLStack64);
        }
        else {
          lib::L2CValue::L2CValue(aLStack64,2);
          lib::L2CValue::operator_(aLStack176,aLStack64);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,1);
        lib::L2CValue::operator_(aLStack176,aLStack64);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,3);
      lib::L2CValue::operator_(aLStack176,aLStack64);
    }
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_TURNIP_NUM);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    iVar4 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
    this_00 = aLStack64;
  }
  lib::L2CValue::_L2CValue(this_00);
LAB_710000a378:
  lib::L2CValue::L2CValue(aLStack192,AttackAir_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x40);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

