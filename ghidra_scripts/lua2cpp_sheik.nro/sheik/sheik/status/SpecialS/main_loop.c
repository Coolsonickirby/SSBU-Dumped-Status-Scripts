
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSheik::status::SpecialS_main_loop(L2CFighterSheik *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  Hash40 HVar7;
  float fVar8;
  uint uVar9;
  long lVar10;
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
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
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  ulong local_70;
  ulong uStack104;
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_SHEIK_STATUS_SPECIAL_S_FLAG_THROW);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_SHEIK_STATUS_SPECIAL_S_FLAG_FAIL);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
    uVar5 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_MA_MSC_CMD_ITEM_THROW_ITEM);
      lib::L2CValue::L2CValue(aLStack208,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack224,0xb22666bce);
      uVar5 = lib::L2CValue::as_integer(aLStack208);
      uVar6 = lib::L2CValue::as_integer(aLStack224);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar8);
      lib::L2CValue::L2CValue(aLStack256,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack272,0xb2dc1d031);
      uVar5 = lib::L2CValue::as_integer(aLStack256);
      uVar6 = lib::L2CValue::as_integer(aLStack272);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack240,fVar8);
      lib::L2CValue::L2CValue(aLStack288,1.0);
      lib::L2CValue::L2CValue(aLStack304,_FIGHTER_HAVE_ITEM_WORK_EXTRA);
      lib::L2CValue::L2CValue(aLStack320,true);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
      app::sv_module_access::item(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x20cbc92683);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,1);
      lib::L2CValue::L2CValue(aLStack224,_FIGHTER_LOG_DATA_INT_SHOOT_NUM);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_SHEIK_STATUS_SPECIAL_S_FLAG_THROW);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
  uVar5 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,CONTROL_PAD_BUTTON_SPECIAL);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    bVar1 = app::lua_bind::ControlModule__check_button_off_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_SHEIK_STATUS_SPECIAL_S_FLAG_SKIP_HOLD);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    }
    lib::L2CValue::L2CValue(aLStack224,_FIGHTER_SHEIK_STATUS_SPECIAL_S_FLAG_FAIL);
    iVar3 = lib::L2CValue::as_integer(aLStack224);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
    uVar5 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack224);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,16.0);
      lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      bVar1 = app::lua_bind::MotionModule__is_flag_start_1_frame_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,1.0);
        lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      }
      fVar8 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar8);
      uVar5 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_SHEIK_STATUS_KIND_SPECIAL_S_END);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_710001ed94;
      }
    }
    else {
      bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_70,_FIGHTER_SHEIK_STATUS_SPECIAL_S_FLAG_SKIP_HOLD);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_SHEIK_STATUS_KIND_SPECIAL_S_HOLD);
          lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_SHEIK_STATUS_KIND_SPECIAL_S_FIRE);
          lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
        }
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack128);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_710001ed94;
      }
    }
    lib::L2CValue::L2CValue(aLStack224,_FIGHTER_SHEIK_STATUS_SPECIAL_S_FLAG_FAIL);
    iVar3 = lib::L2CValue::as_integer(aLStack224);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
    uVar5 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack224);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack224,_FIGHTER_SHEIK_STATUS_SPECIAL_S_WORK_INT_EFFECT_HANDLE);
      iVar3 = lib::L2CValue::as_integer(aLStack224);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
      uVar5 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue(aLStack224);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack240,0x1520626acd);
        lib::L2CValue::L2CValue(aLStack256,0.0);
        lib::L2CValue::L2CValue(aLStack272,0.0);
        lib::L2CValue::L2CValue(aLStack288,0.0);
        lib::L2CValue::L2CValue(aLStack304,0.0);
        lib::L2CValue::L2CValue(aLStack320,0.0);
        lib::L2CValue::L2CValue(aLStack336,0.0);
        lib::L2CValue::L2CValue(aLStack352,1.0);
        lib::L2CValue::L2CValue
                  (aLStack368,_EFFECT_SUB_ATTRIBUTE_SYNC_INIT_POS | _EFFECT_SUB_ATTRIBUTE_SYNC_STOP)
        ;
        lib::L2CValue::L2CValue(aLStack384,0);
        HVar7 = lib::L2CValue::as_hash(aLStack240);
        uVar5 = lib::L2CValue::as_number(aLStack256);
        lVar10 = lib::L2CValue::as_number(aLStack272);
        uVar9 = lib::L2CValue::as_number(aLStack288);
        local_60 = uVar5 & 0xffffffff | lVar10 << 0x20;
        uStack88 = (ulong)uVar9;
        uVar5 = lib::L2CValue::as_number(aLStack304);
        lVar10 = lib::L2CValue::as_number(aLStack320);
        uVar9 = lib::L2CValue::as_number(aLStack336);
        local_70 = uVar5 & 0xffffffff | lVar10 << 0x20;
        uStack104 = (ulong)uVar9;
        fVar8 = (float)lib::L2CValue::as_number(aLStack352);
        uVar9 = lib::L2CValue::as_integer(aLStack368);
        iVar3 = lib::L2CValue::as_integer(aLStack384);
        uVar9 = app::lua_bind::EffectModule__req_impl
                          (this->moduleAccessor,HVar7,(Vector3f *)&local_60,(Vector3f *)&local_70,
                           fVar8,uVar9,iVar3,false,0);
        lib::L2CValue::L2CValue(aLStack224,uVar9);
        lib::L2CValue::operator_(aLStack176,aLStack224);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack384);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_60,_FIGHTER_SHEIK_STATUS_SPECIAL_S_WORK_INT_EFFECT_HANDLE);
        iVar3 = lib::L2CValue::as_integer(aLStack176);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0x270a162471);
      lib::L2CValue::L2CValue(aLStack224,0x5e008fd84);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack144);
  lib::L2CValue::L2CValue(aLStack224,0x976c3b29b);
  lib::L2CValue::L2CValue(aLStack240,0xd2b3a620b);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_KINETIC_TYPE_SHEIK_SPECIAL_S);
  lib::L2CValue::L2CValue(aLStack272,_FIGHTER_KINETIC_TYPE_SHEIK_SPECIAL_AIR_S);
  FUN_710001d8d0(this,&local_70,aLStack224,aLStack240,aLStack256,aLStack272);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710001ed94:
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

