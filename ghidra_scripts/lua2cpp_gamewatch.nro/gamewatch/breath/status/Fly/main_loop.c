
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponGamewatchBreath::status::Fly_main_loop
          (L2CWeaponGamewatchBreath *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  float *pfVar7;
  L2CValue *pLVar8;
  L2CValue *this_00;
  L2CValue *this_01;
  float fVar9;
  uint uVar10;
  long lVar11;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  ulong local_b0;
  undefined8 uStack168;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  bVar1 = app::lua_bind::SlowModule__is_skip_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  lib::L2CValue::operator_((L2CValue *)&local_60);
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_b0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((bVar2 & 1U) == 0) {
LAB_7100032dbc:
    iVar3 = 0;
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    bVar1 = app::lua_bind::WorkModule__count_down_int_impl(this->moduleAccessor,iVar3,0);
    lib::L2CValue::L2CValue((L2CValue *)&local_b0,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_b0);
    if ((bVar2 & 1U) == 0) {
      bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,0xff);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack112,_WEAPON_INSTANCE_WORK_ID_FLAG_SWALLOWED);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue((L2CValue *)&local_b0,false);
        uVar5 = lib::L2CValue::operator__((L2CValue *)&local_60,(L2CValue *)&local_b0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_60,_WEAPON_GAMEWATCH_BREATH_STATUS_WORK_INT_MOVE_FRAME);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
          bVar1 = app::lua_bind::WorkModule__count_down_int_impl(this->moduleAccessor,iVar3,0);
          lib::L2CValue::L2CValue((L2CValue *)&local_b0,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_b0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_60);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
            lib::L2CValue::L2CValue(aLStack128,_WEAPON_GAMEWATCH_BREATH_STATUS_WORK_FLOAT_SPEED_Y);
            iVar3 = lib::L2CValue::as_integer(aLStack128);
            fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack112,fVar9);
            uVar5 = lib::L2CValue::as_number((L2CValue *)&local_60);
            uVar10 = lib::L2CValue::as_number(aLStack112);
            local_b0 = uVar5 & 0xffffffff | (ulong)uVar10 << 0x20;
            uStack168 = 0;
            app::lua_bind::PostureModule__add_pos_2d_impl
                      (this->moduleAccessor,(Vector2f *)&local_b0);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue((L2CValue *)&local_60);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0xc62eb0c55);
            lib::L2CValue::L2CValue(aLStack112,0xdec3be65a);
            uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
            uVar6 = lib::L2CValue::as_integer(aLStack112);
            iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
            lib::L2CValue::L2CValue((L2CValue *)&local_b0,iVar3);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue((L2CValue *)&local_60);
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_60,_WEAPON_GAMEWATCH_BREATH_STATUS_WORK_INT_MOVE_FRAME);
            iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_b0);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
            app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
            lib::L2CValue::_L2CValue((L2CValue *)&local_60);
            lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
          }
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_60,_WEAPON_GAMEWATCH_BREATH_STATUS_WORK_FLAG_REFLECT);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)&local_b0,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_b0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_60);
          if ((bVar2 & 1U) != 0) {
            pfVar7 = (float *)app::lua_bind::PostureModule__rot_impl(this->moduleAccessor,0);
            lib::L2CValue::L2CValue((L2CValue *)&local_b0,*pfVar7);
            lib::L2CValue::L2CValue(aLStack160,pfVar7[1]);
            lib::L2CValue::L2CValue(aLStack144,pfVar7[2]);
            FUN_710001de50(aLStack112,this,&local_b0);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
            pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x162d277af);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,180.0);
            lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_60);
            lib::L2CValue::_L2CValue((L2CValue *)&local_60);
            pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x162d277af);
            lib::L2CValue::operator_(pLVar8,aLStack128);
            lib::L2CValue::_L2CValue(aLStack128);
            pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
            this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
            this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x162d277af);
            uVar5 = lib::L2CValue::as_number(pLVar8);
            lVar11 = lib::L2CValue::as_number(this_00);
            uVar10 = lib::L2CValue::as_number(this_01);
            local_60 = uVar5 & 0xffffffff | lVar11 << 0x20;
            uStack88 = (ulong)uVar10;
            app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_60,0)
            ;
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_60,_WEAPON_GAMEWATCH_BREATH_STATUS_WORK_FLOAT_SPEED_Y);
            iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
            fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack128,fVar9);
            lib::L2CValue::_L2CValue((L2CValue *)&local_60);
            lib::L2CValue::operator_(aLStack128);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
            lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_60);
            lib::L2CValue::_L2CValue((L2CValue *)&local_60);
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_60,_WEAPON_GAMEWATCH_BREATH_STATUS_WORK_FLOAT_SPEED_Y);
            fVar9 = (float)lib::L2CValue::as_number(aLStack192);
            iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
            app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar3);
            lib::L2CValue::_L2CValue((L2CValue *)&local_60);
            lib::L2CValue::_L2CValue(aLStack192);
            lib::L2CValue::_L2CValue(aLStack208);
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_60,_WEAPON_GAMEWATCH_BREATH_STATUS_WORK_FLAG_REFLECT);
            iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
            app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::_L2CValue((L2CValue *)&local_60);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
          }
          lib::L2CValue::L2CValue(aLStack112,0.0);
          lib::L2CValue::L2CValue(aLStack192,_WEAPON_GAMEWATCH_BREATH_STATUS_WORK_FLOAT_SPEED_Y);
          iVar3 = lib::L2CValue::as_integer(aLStack192);
          fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack128,fVar9);
          uVar5 = lib::L2CValue::as_number(aLStack112);
          uVar10 = lib::L2CValue::as_number(aLStack128);
          local_60 = uVar5 & 0xffffffff | (ulong)uVar10 << 0x20;
          uStack88 = 0;
          app::lua_bind::AttackModule__set_speed_impl(this->moduleAccessor,(Vector2f *)&local_60);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack112);
        }
        goto LAB_7100032dbc;
      }
    }
    else {
      lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    iVar3 = 1;
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

