
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponSnakeNikitamissile::status::Fly_main_loop
          (L2CWeaponSnakeNikitamissile *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  Weapon *pWVar7;
  float *pfVar8;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  ulong uVar9;
  Hash40 HVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
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
  
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_SNAKE_NIKITA_MISSILE_STATUS_FLY_WORK_INT_FALL_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack256,iVar3);
  lib::L2CValue::L2CValue(aLStack192,0);
  uVar5 = lib::L2CValue::operator__(aLStack256,aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_SNAKE_NIKITA_MISSILE_INSTANCE_WORK_FLOAT_HP);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack256,fVar11);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    uVar5 = lib::L2CValue::operator__(aLStack256,aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack144,_GROUND_TOUCH_FLAG_ALL);
      uVar4 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
      lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack192);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack128,_WEAPON_SNAKE_NIKITA_MISSILE_INSTANCE_FLAG_IS_AUTONOMY);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack256,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack192,false);
        uVar5 = lib::L2CValue::operator__(aLStack256,aLStack192);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar5 & 1) != 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
          pWVar7 = (Weapon *)lib::L2CValue::as_pointer(pLVar6);
          uVar4 = app::lua_bind::Weapon__get_founder_id_impl(pWVar7);
          lib::L2CValue::L2CValue(aLStack256,uVar4);
          uVar4 = lib::L2CValue::as_integer(aLStack256);
          pfVar8 = (float *)app::sv_battle_object::pos(uVar4);
          lib::L2CValue::L2CValue(aLStack192,*pfVar8);
          lib::L2CValue::L2CValue(aLStack176,pfVar8[1]);
          lib::L2CValue::L2CValue(aLStack160,pfVar8[2]);
          FUN_7100018740(aLStack144,this,aLStack192);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack256);
          pfVar8 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack256,*pfVar8);
          lib::L2CValue::L2CValue(aLStack240,pfVar8[1]);
          lib::L2CValue::L2CValue(aLStack224,pfVar8[2]);
          FUN_7100018740(aLStack208,this,aLStack256);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack240);
          lib::L2CValue::_L2CValue(aLStack256);
          pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
          this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
          this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x18cdc1683);
          this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x1fbdb2615);
          fVar11 = (float)lib::L2CValue::as_number(pLVar6);
          fVar12 = (float)lib::L2CValue::as_number(this_00);
          fVar13 = (float)lib::L2CValue::as_number(this_01);
          fVar14 = (float)lib::L2CValue::as_number(this_02);
          fVar11 = (float)app::sv_math::vec2_distance(fVar11,fVar12,fVar13,fVar14);
          lib::L2CValue::L2CValue(aLStack128,fVar11);
          lib::L2CValue::L2CValue(aLStack288,0x135d42378a);
          lib::L2CValue::L2CValue(aLStack304,0x10c3526ac1);
          uVar5 = lib::L2CValue::as_integer(aLStack288);
          uVar9 = lib::L2CValue::as_integer(aLStack304);
          fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                    (this->moduleAccessor,uVar5,uVar9);
          lib::L2CValue::L2CValue(aLStack272,fVar11);
          uVar5 = lib::L2CValue::operator__(aLStack272,aLStack128);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::_L2CValue(aLStack288);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar5 & 1) != 0) {
            app::LinkEvent::new_l2c_table();
            pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x105a79305b);
            lib::L2CValue::L2CValue(aLStack128,0x2a5d015e4a);
            lib::L2CValue::operator_(pLVar6,aLStack128);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::L2CValue(aLStack288,_WEAPON_LINK_NO_CONSTRAINT);
            FUN_7100035d10(aLStack128,this,aLStack288,aLStack272);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack288);
            lib::L2CValue::_L2CValue(aLStack272);
            lib::L2CValue::L2CValue(aLStack272,_WEAPON_SNAKE_NIKITA_MISSILE_STATUS_KIND_STOP_FALL);
            lib::L2CValue::L2CValue(aLStack288,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xf0,(L2CValue)0xe0);
            lib::L2CValue::_L2CValue(aLStack288);
            lib::L2CValue::_L2CValue(aLStack272);
            lib::L2CValue::L2CValue((L2CValue *)return_value,1);
            lib::L2CValue::_L2CValue(aLStack208);
            lib::L2CValue::_L2CValue(aLStack144);
            return;
          }
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack144);
        }
        lib::L2CValue::L2CValue(aLStack144,0x149902491f);
        HVar10 = lib::L2CValue::as_hash(aLStack144);
        bVar1 = app::lua_bind::SoundModule__is_playing_status_impl(this->moduleAccessor,HVar10);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack144,0x135d42378a);
          lib::L2CValue::L2CValue(aLStack208,0x917523dc4);
          uVar5 = lib::L2CValue::as_integer(aLStack144);
          uVar9 = lib::L2CValue::as_integer(aLStack208);
          fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                    (this->moduleAccessor,uVar5,uVar9);
          lib::L2CValue::L2CValue(aLStack128,fVar11);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::L2CValue(aLStack208,0x135d42378a);
          lib::L2CValue::L2CValue(aLStack272,0x92b5f029d);
          uVar5 = lib::L2CValue::as_integer(aLStack208);
          uVar9 = lib::L2CValue::as_integer(aLStack272);
          fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                    (this->moduleAccessor,uVar5,uVar9);
          lib::L2CValue::L2CValue(aLStack144,fVar11);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::L2CValue(aLStack272,0x135d42378a);
          lib::L2CValue::L2CValue(aLStack288,0xba2ddd3f5);
          uVar5 = lib::L2CValue::as_integer(aLStack272);
          uVar9 = lib::L2CValue::as_integer(aLStack288);
          fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                    (this->moduleAccessor,uVar5,uVar9);
          lib::L2CValue::L2CValue(aLStack208,fVar11);
          lib::L2CValue::_L2CValue(aLStack288);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::L2CValue(aLStack288,0x135d42378a);
          lib::L2CValue::L2CValue(aLStack304,0xb7fc224d8);
          uVar5 = lib::L2CValue::as_integer(aLStack288);
          uVar9 = lib::L2CValue::as_integer(aLStack304);
          fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                    (this->moduleAccessor,uVar5,uVar9);
          lib::L2CValue::L2CValue(aLStack272,fVar11);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::_L2CValue(aLStack288);
          fVar11 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack304,fVar11);
          lib::L2CValue::L2CValue
                    (aLStack336,_WEAPON_SNAKE_NIKITA_MISSILE_STATUS_FLY_WORK_FLOAT_START_Y);
          iVar3 = lib::L2CValue::as_integer(aLStack336);
          fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack320,fVar11);
          lib::L2CValue::operator_(aLStack304,aLStack320);
          lib::L2CValue::_L2CValue(aLStack320);
          lib::L2CValue::_L2CValue(aLStack336);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::operator_(aLStack288,aLStack272);
          lib::L2CValue::operator_(aLStack208,aLStack272);
          lib::L2CValue::operator_(aLStack336,aLStack352);
          lib::L2CValue::L2CValue(aLStack368,0.0);
          lib::L2CValue::L2CValue(aLStack384,1.0);
          lua2cpp::L2CFighterBase::clamp(this,(L2CValue)0xc0,(L2CValue)0x90,(L2CValue)0x80);
          lib::L2CValue::_L2CValue(aLStack384);
          lib::L2CValue::_L2CValue(aLStack368);
          lib::L2CValue::_L2CValue(aLStack320);
          lib::L2CValue::_L2CValue(aLStack352);
          lib::L2CValue::_L2CValue(aLStack336);
          lib::L2CValue::L2CValue(aLStack336,0x149902491f);
          lib::L2CValue::operator_(aLStack128,aLStack144);
          lib::L2CValue::operator_(aLStack416,aLStack304);
          lib::L2CValue::operator_(aLStack400,aLStack144);
          HVar10 = lib::L2CValue::as_hash(aLStack336);
          fVar11 = (float)lib::L2CValue::as_number(aLStack352);
          app::lua_bind::SoundModule__set_se_pitch_ratio_impl(this->moduleAccessor,HVar10,fVar11);
          lib::L2CValue::_L2CValue(aLStack352);
          lib::L2CValue::_L2CValue(aLStack400);
          lib::L2CValue::_L2CValue(aLStack416);
          lib::L2CValue::_L2CValue(aLStack336);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::_L2CValue(aLStack288);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
        }
        iVar3 = 0;
        goto LAB_7100035248;
      }
    }
    else {
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    lib::L2CValue::L2CValue(aLStack192,_WEAPON_SNAKE_NIKITA_MISSILE_STATUS_KIND_EXPLOSION);
    lib::L2CValue::L2CValue(aLStack256,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0x0);
    lib::L2CValue::_L2CValue(aLStack256);
    pLVar6 = aLStack192;
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_SNAKE_NIKITA_MISSILE_INSTANCE_FLAG_IS_AUTONOMY);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack256,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack192,false);
    uVar5 = lib::L2CValue::operator__(aLStack256,aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar5 & 1) != 0) {
      app::LinkEvent::new_l2c_table();
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x105a79305b);
      lib::L2CValue::L2CValue(aLStack192,0x21dbe029dc);
      lib::L2CValue::operator_(pLVar6,aLStack192);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue(aLStack128,_WEAPON_LINK_NO_CONSTRAINT);
      FUN_7100035d10(aLStack192,this,aLStack128,aLStack256);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack256);
    }
    lib::L2CValue::L2CValue(aLStack256,_WEAPON_SNAKE_NIKITA_MISSILE_STATUS_KIND_STOP_FALL);
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0x80);
    lib::L2CValue::_L2CValue(aLStack128);
    pLVar6 = aLStack256;
  }
  lib::L2CValue::_L2CValue(pLVar6);
  iVar3 = 1;
LAB_7100035248:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

