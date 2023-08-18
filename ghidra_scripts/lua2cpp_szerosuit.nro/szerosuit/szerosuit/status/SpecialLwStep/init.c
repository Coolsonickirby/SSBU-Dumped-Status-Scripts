
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSzerosuit::status::SpecialLwStep_init(L2CFighterSzerosuit *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  Hash40 HVar7;
  Hash40 HVar8;
  undefined8 *this_00;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  undefined8 auStack144 [2];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_LW_WORK_INT_TREAD_TARGET_ID);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar3);
  lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,-1);
  uVar5 = lib::L2CValue::operator__((L2CValue *)&local_50,aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,0x20611cf707);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LINK_NO_CONSTRAINT);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      bVar2 = app::lua_bind::LinkModule__link_impl(this->moduleAccessor,iVar3,uVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,_MA_MSC_LINK_SEND_EVENT_PARENTS);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LINK_NO_CONSTRAINT);
        lib::L2CValue::L2CValue((L2CValue *)auStack144,0x573632f69);
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_STATUS_TREAD_WORK_INT_LINK_EVENT_RESULT_0);
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_STATUS_TREAD_WORK_FLOAT_LINK_EVENT_RESULT_0);
        lib::L2CValue::L2CValue(aLStack192,_FIGHTER_STATUS_TREAD_FLAG_LINK_EVENT_RESULT_0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_50);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack144);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
        app::sv_module_access::link(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue((L2CValue *)auStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_TREAD_FLAG_LINK_EVENT_RESULT_0);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar1 & 1U) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_TREAD_FLAG_NO_REACTION);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
          app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::_L2CValue((L2CValue *)&local_50);
          lib::L2CValue::L2CValue
                    ((L2CValue *)auStack144,_FIGHTER_STATUS_TREAD_WORK_FLOAT_LINK_EVENT_RESULT_0);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack144);
          fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack128,fVar9);
          lib::L2CValue::L2CValue(aLStack176,_FIGHTER_STATUS_TREAD_WORK_FLOAT_LINK_EVENT_RESULT_1);
          iVar3 = lib::L2CValue::as_integer(aLStack176);
          fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack160,fVar9);
          fVar9 = (float)app::lua_bind::PostureModule__pos_z_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack192,fVar9);
          uVar10 = lib::L2CValue::as_number(aLStack128);
          uVar11 = lib::L2CValue::as_number(aLStack160);
          uVar4 = lib::L2CValue::as_number(aLStack192);
          local_50 = CONCAT44(uVar11,uVar10);
          uStack72 = (ulong)uVar4;
          app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_50);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack128);
          this_00 = auStack144;
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_LINK_NO_CONSTRAINT);
          lib::L2CValue::L2CValue(aLStack128,0x31ed91fca);
          lib::L2CValue::L2CValue(aLStack160,_FIGHTER_STATUS_TREAD_WORK_INT_LINK_EVENT_RESULT_0);
          iVar3 = lib::L2CValue::as_integer(aLStack160);
          lVar6 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)auStack144,lVar6);
          lib::L2CValue::L2CValue
                    (aLStack176,_CONSTRAINT_FLAG_ORIENTATION_POSTURE_ROT | CONSTRAINT_FLAG_POSITION)
          ;
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
          HVar7 = lib::L2CValue::as_hash(aLStack128);
          HVar8 = lib::L2CValue::as_hash((L2CValue *)auStack144);
          uVar4 = lib::L2CValue::as_integer(aLStack176);
          app::lua_bind::LinkModule__set_model_constraint_pos_ort_impl
                    (this->moduleAccessor,iVar3,HVar7,HVar8,uVar4,true);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue((L2CValue *)auStack144);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack128);
          this_00 = &local_50;
        }
        lib::L2CValue::_L2CValue((L2CValue *)this_00);
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

