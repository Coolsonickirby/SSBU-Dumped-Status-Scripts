
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPichu::status::SpecialHiWarp_main_loop(L2CFighterPichu *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  undefined auStack368 [32];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  undefined auStack288 [32];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack240);
  lib::L2CValue::_L2CValue(aLStack240);
  if ((bVar1 & 1U) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,8);
    lib::L2CValue::operator_(pLVar5);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack240);
    lib::L2CValue::_L2CValue(aLStack240);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue
                (aLStack240,_FIGHTER_PIKACHU_STATUS_WORK_ID_INT_QUICK_ATTACK_MOVE_TIME_COUNTER);
      iVar3 = lib::L2CValue::as_integer(aLStack240);
      app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack240);
    }
    lib::L2CValue::L2CValue
              (aLStack400,_FIGHTER_PIKACHU_STATUS_WORK_ID_INT_QUICK_ATTACK_MOVE_TIME_COUNTER);
    iVar3 = lib::L2CValue::as_integer(aLStack400);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack320,iVar3);
    lib::L2CValue::L2CValue(aLStack240,0);
    uVar6 = lib::L2CValue::operator_(aLStack320,aLStack240);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack400);
    if ((uVar6 & 1) == 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,8);
      lib::L2CValue::operator_(pLVar5);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack240);
      lib::L2CValue::_L2CValue(aLStack240);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack144,0);
        lib::L2CValue::L2CValue(aLStack160,0);
        lib::L2CValue::L2CValue(aLStack176,0);
        lib::L2CValue::L2CValue(aLStack192,0);
        lib::L2CValue::L2CValue(aLStack208,0);
        lib::L2CValue::L2CValue(aLStack320,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
        iVar3 = lib::L2CValue::as_integer(aLStack320);
        fVar8 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl
                                 (this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack240,fVar8);
        lib::L2CValue::operator_(aLStack176,aLStack240);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::L2CValue(aLStack320,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
        iVar3 = lib::L2CValue::as_integer(aLStack320);
        fVar8 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl
                                 (this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack240,fVar8);
        lib::L2CValue::operator_(aLStack144,aLStack240);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::L2CValue(aLStack320,_GROUND_TOUCH_FLAG_UP);
        uVar4 = lib::L2CValue::as_integer(aLStack320);
        bVar2 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
        lib::L2CValue::L2CValue(aLStack240,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack240);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack320);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack128,_GROUND_TOUCH_FLAG_UP);
          uVar4 = lib::L2CValue::as_integer(aLStack128);
          uVar12 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar4);
          lib::L2CValue::L2CValue(aLStack240,(float)uVar12);
          lib::L2CValue::L2CValue(aLStack224,(float)((ulong)uVar12 >> 0x20));
          lib::L2CValue::L2CValue(aLStack320,aLStack240);
          lib::L2CValue::L2CValue(aLStack400,aLStack224);
          lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xc0,(L2CValue)0x70);
          lib::L2CValue::_L2CValue(aLStack400);
          lib::L2CValue::_L2CValue(aLStack320);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack240);
          lib::L2CValue::_L2CValue(aLStack128);
          pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
          lib::L2CValue::operator_(aLStack192,pLVar5);
          pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
          lib::L2CValue::operator_(aLStack208,pLVar5);
          fVar8 = (float)lib::L2CValue::as_number(aLStack176);
          fVar9 = (float)lib::L2CValue::as_number(aLStack144);
          fVar10 = (float)lib::L2CValue::as_number(aLStack192);
          fVar11 = (float)lib::L2CValue::as_number(aLStack208);
          fVar8 = (float)app::sv_math::vec2_angle(fVar8,fVar9,fVar10,fVar11);
          lib::L2CValue::L2CValue(aLStack320,fVar8);
          lib::L2CValue::operator_(aLStack160,aLStack320);
          lib::L2CValue::_L2CValue(aLStack320);
          lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),0x1086bc4a93);
          lib::L2CValue::L2CValue((L2CValue *)auStack288,0x16e676e07a);
          uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack288 + 0x10));
          uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack288);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
          lib::L2CValue::L2CValue(aLStack256,iVar3);
          lib::L2CValue::L2CValue(aLStack320,90.0);
          pLVar5 = aLStack320;
          lib::L2CValue::operator_(aLStack256,pLVar5);
          lib::L2CValue::_L2CValue(aLStack320);
          lib::L2CAgent::math_rad((L2CAgent *)aLStack128,pLVar5);
          uVar6 = lib::L2CValue::operator_(aLStack400,aLStack160);
          lib::L2CValue::_L2CValue(aLStack400);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue((L2CValue *)auStack288);
          lib::L2CValue::_L2CValue((L2CValue *)(auStack288 + 0x10));
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack256,_FIGHTER_PIKACHU_STATUS_KIND_SPECIAL_HI_END);
            lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
            lib::L2CValue::_L2CValue((L2CValue *)(auStack288 + 0x10));
            lib::L2CValue::_L2CValue(aLStack256);
          }
          lib::L2CValue::_L2CValue(aLStack112);
        }
        lib::L2CValue::L2CValue(aLStack400,GROUND_TOUCH_FLAG_RIGHT);
        uVar4 = lib::L2CValue::as_integer(aLStack400);
        bVar2 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
        lib::L2CValue::L2CValue(aLStack320,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack320);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack400);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)auStack288,GROUND_TOUCH_FLAG_RIGHT);
          uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack288);
          uVar12 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar4);
          lib::L2CValue::L2CValue(aLStack320,(float)uVar12);
          lib::L2CValue::L2CValue(aLStack304,(float)((ulong)uVar12 >> 0x20));
          lib::L2CValue::L2CValue(aLStack400,aLStack320);
          lib::L2CValue::L2CValue(aLStack112,aLStack304);
          lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x70,(L2CValue)0x90);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack400);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::_L2CValue(aLStack320);
          lib::L2CValue::_L2CValue((L2CValue *)auStack288);
          pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
          lib::L2CValue::operator_(aLStack192,pLVar5);
          pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
          lib::L2CValue::operator_(aLStack208,pLVar5);
          fVar8 = (float)lib::L2CValue::as_number(aLStack176);
          fVar9 = (float)lib::L2CValue::as_number(aLStack144);
          fVar10 = (float)lib::L2CValue::as_number(aLStack192);
          fVar11 = (float)lib::L2CValue::as_number(aLStack208);
          fVar8 = (float)app::sv_math::vec2_angle(fVar8,fVar9,fVar10,fVar11);
          lib::L2CValue::L2CValue(aLStack400,fVar8);
          lib::L2CValue::operator_(aLStack160,aLStack400);
          lib::L2CValue::_L2CValue(aLStack400);
          lib::L2CValue::L2CValue((L2CValue *)(auStack368 + 0x10),0x1086bc4a93);
          lib::L2CValue::L2CValue((L2CValue *)auStack368,0x16e676e07a);
          uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack368 + 0x10));
          uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack368);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
          lib::L2CValue::L2CValue(aLStack336,iVar3);
          lib::L2CValue::L2CValue(aLStack400,90.0);
          pLVar5 = aLStack400;
          lib::L2CValue::operator_(aLStack336,pLVar5);
          lib::L2CValue::_L2CValue(aLStack400);
          lib::L2CAgent::math_rad((L2CAgent *)auStack288,pLVar5);
          uVar6 = lib::L2CValue::operator_(aLStack112,aLStack160);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue((L2CValue *)auStack288);
          lib::L2CValue::_L2CValue(aLStack336);
          lib::L2CValue::_L2CValue((L2CValue *)auStack368);
          lib::L2CValue::_L2CValue((L2CValue *)(auStack368 + 0x10));
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue
                      ((L2CValue *)auStack288,_FIGHTER_PIKACHU_STATUS_KIND_SPECIAL_HI_END);
            lib::L2CValue::L2CValue(aLStack336,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)0xb0);
            lib::L2CValue::_L2CValue(aLStack336);
            lib::L2CValue::_L2CValue((L2CValue *)auStack288);
          }
          lib::L2CValue::_L2CValue(aLStack128);
        }
        lib::L2CValue::L2CValue(aLStack112,_GROUND_TOUCH_FLAG_LEFT);
        uVar4 = lib::L2CValue::as_integer(aLStack112);
        bVar2 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
        lib::L2CValue::L2CValue(aLStack400,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack400);
        lib::L2CValue::_L2CValue(aLStack400);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)auStack368,_GROUND_TOUCH_FLAG_LEFT);
          uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack368);
          uVar12 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar4);
          lib::L2CValue::L2CValue(aLStack400,(float)uVar12);
          lib::L2CValue::L2CValue(aLStack384,(float)((ulong)uVar12 >> 0x20));
          lib::L2CValue::L2CValue(aLStack112,aLStack400);
          lib::L2CValue::L2CValue(aLStack128,aLStack384);
          lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x90,(L2CValue)0x80);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack384);
          lib::L2CValue::_L2CValue(aLStack400);
          lib::L2CValue::_L2CValue((L2CValue *)auStack368);
          pLVar5 = (L2CValue *)
                   lib::L2CValue::operator__((L2CValue *)(auStack368 + 0x10),0x18cdc1683);
          lib::L2CValue::operator_(aLStack192,pLVar5);
          pLVar5 = (L2CValue *)
                   lib::L2CValue::operator__((L2CValue *)(auStack368 + 0x10),0x1fbdb2615);
          lib::L2CValue::operator_(aLStack208,pLVar5);
          fVar8 = (float)lib::L2CValue::as_number(aLStack176);
          fVar9 = (float)lib::L2CValue::as_number(aLStack144);
          fVar10 = (float)lib::L2CValue::as_number(aLStack192);
          fVar11 = (float)lib::L2CValue::as_number(aLStack208);
          fVar8 = (float)app::sv_math::vec2_angle(fVar8,fVar9,fVar10,fVar11);
          lib::L2CValue::L2CValue(aLStack112,fVar8);
          lib::L2CValue::operator_(aLStack160,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack432,0x1086bc4a93);
          lib::L2CValue::L2CValue(aLStack448,0x16e676e07a);
          uVar6 = lib::L2CValue::as_integer(aLStack432);
          uVar7 = lib::L2CValue::as_integer(aLStack448);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
          lib::L2CValue::L2CValue(aLStack416,iVar3);
          lib::L2CValue::L2CValue(aLStack112,90.0);
          pLVar5 = aLStack112;
          lib::L2CValue::operator_(aLStack416,pLVar5);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CAgent::math_rad((L2CAgent *)auStack368,pLVar5);
          uVar6 = lib::L2CValue::operator_(aLStack128,aLStack160);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue((L2CValue *)auStack368);
          lib::L2CValue::_L2CValue(aLStack416);
          lib::L2CValue::_L2CValue(aLStack448);
          lib::L2CValue::_L2CValue(aLStack432);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PIKACHU_STATUS_KIND_SPECIAL_HI_END);
            lib::L2CValue::L2CValue(aLStack128,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
          }
          lib::L2CValue::_L2CValue((L2CValue *)(auStack368 + 0x10));
        }
        FUN_710000b2a0(this);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
      }
      FUN_710000d470(this);
      iVar3 = 0;
      goto LAB_7100020474;
    }
    lib::L2CValue::L2CValue(aLStack240,_FIGHTER_PIKACHU_STATUS_KIND_SPECIAL_HI_END);
    lib::L2CValue::L2CValue(aLStack320,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x10,(L2CValue)0xc0);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack240);
  }
  iVar3 = 1;
LAB_7100020474:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

