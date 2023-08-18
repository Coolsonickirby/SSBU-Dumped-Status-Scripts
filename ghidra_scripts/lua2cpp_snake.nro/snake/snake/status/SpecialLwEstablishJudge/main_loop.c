
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSnake::status::SpecialLwEstablishJudge_main_loop
          (L2CFighterSnake *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  Hash40 HVar6;
  L2CValue *this_00;
  uint uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  undefined8 local_70;
  undefined8 uStack104;
  undefined8 local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_SNAKE_STATUS_SPECIAL_LW_FLAG_SQUAT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,
               _FIGHTER_SNAKE_STATUS_SPECIAL_LW_ESTABLISH_JUDGE_FLAG_TRANS_ESTABLISH_TARGET);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0x4b12bd53f);
      lib::L2CValue::L2CValue(aLStack192,0.0);
      lib::L2CValue::L2CValue(aLStack208,0.0);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      HVar6 = lib::L2CValue::as_hash((L2CValue *)&local_70);
      local_60._0_4_ = (float)lib::L2CValue::as_number(aLStack192);
      local_60._4_4_ = (float)lib::L2CValue::as_number(aLStack208);
      uVar7 = lib::L2CValue::as_number(aLStack224);
      uStack88 = (ulong)uVar7;
      app::lua_bind::ModelModule__joint_global_position_impl
                (this->moduleAccessor,HVar6,(Vector3f *)&local_60,true);
      lib::L2CValue::L2CValue(aLStack176,(float)local_60);
      lib::L2CValue::L2CValue(aLStack160,local_60._4_4_);
      lib::L2CValue::L2CValue(aLStack144,(float)uStack88);
      FUN_7100018740(aLStack128,this,aLStack176);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      fVar8 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar8);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,8.0);
      lib::L2CValue::operator_((L2CValue *)&local_60,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar8);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,-1.0);
      uVar5 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,-1.0);
        lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      }
      pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
      this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lib::L2CValue::L2CValue(aLStack240,true);
      uVar9 = lib::L2CValue::as_number(pLVar4);
      uVar10 = lib::L2CValue::as_number(this_00);
      local_60 = CONCAT44(uVar10,uVar9);
      uStack88 = 0;
      uVar9 = lib::L2CValue::as_number(aLStack192);
      uVar10 = lib::L2CValue::as_number(aLStack224);
      local_70 = CONCAT44(uVar10,uVar9);
      uStack104 = 0;
      bVar1 = lib::L2CValue::as_bool(aLStack240);
      bVar1 = app::lua_bind::GroundModule__ray_check_impl
                        (this->moduleAccessor,(Vector2f *)&local_60,(Vector2f *)&local_70,
                         (bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack208);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      if ((bVar2 & 1U) == 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar4,(L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_LW_DROP);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_60);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        }
        else {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_60,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_LW_ESTABLISH_GROUND);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_60);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        }
      }
      else {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_60,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_LW_ESTABLISH_WALL);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      }
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack128);
      return;
    }
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_LW_ESTABLISH_TARGET);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0xa0);
  }
  else {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack176,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_LW_DROP);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0xa0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_LW_ESTABLISH_GROUND);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0xa0);
    }
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  return;
}

