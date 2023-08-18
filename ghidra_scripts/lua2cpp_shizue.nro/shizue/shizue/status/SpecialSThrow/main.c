
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterShizue::status::SpecialSThrow_main(L2CFighterShizue *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  Hash40 HVar9;
  Hash40 HVar10;
  void *pvVar11;
  BattleObjectModuleAccessor *pBVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
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
  
  lib::L2CValue::L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack208);
  lua2cpp::L2CFighterCommon::IsThrowStick(this);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x171beeff9);
  bVar1 = lib::L2CValue::operator_cast_to_bool(pLVar7);
  if ((bVar1 & 1U) == 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x2d8932aac);
    bVar1 = lib::L2CValue::operator_cast_to_bool(pLVar7);
    if ((bVar1 & 1U) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x246f0d2cb);
      bVar1 = lib::L2CValue::operator_cast_to_bool(pLVar7);
      if ((bVar1 & 1U) == 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x176d32be0);
        bVar1 = lib::L2CValue::operator_cast_to_bool(pLVar7);
        if ((bVar1 & 1U) == 0) {
          this_00 = &this->globalTable;
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
          lib::L2CValue::L2CValue(aLStack368,FIGHTER_PAD_CMD_CAT2_FLAG_THROW_B);
          lib::L2CValue::operator_(pLVar7,aLStack368);
          lib::L2CValue::_L2CValue(aLStack368);
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack144);
          lib::L2CValue::_L2CValue(aLStack144);
          if ((bVar1 & 1U) == 0) {
            pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
            lib::L2CValue::L2CValue(aLStack368,_FIGHTER_PAD_CMD_CAT2_FLAG_THROW_HI);
            lib::L2CValue::operator_(pLVar7,aLStack368);
            lib::L2CValue::_L2CValue(aLStack368);
            bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack144);
            lib::L2CValue::_L2CValue(aLStack144);
            if ((bVar1 & 1U) == 0) {
              pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
              lib::L2CValue::L2CValue(aLStack368,FIGHTER_PAD_CMD_CAT2_FLAG_THROW_LW);
              lib::L2CValue::operator_(pLVar7,aLStack368);
              lib::L2CValue::_L2CValue(aLStack368);
              bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack144);
              lib::L2CValue::_L2CValue(aLStack144);
              if ((bVar1 & 1U) == 0) {
                lib::L2CValue::L2CValue(aLStack272,0x111951678e);
                lib::L2CValue::L2CValue(aLStack256,0x156f0c9391);
                lib::L2CValue::L2CValue(aLStack240,0x19e9a85f87);
                lib::L2CValue::L2CValue(aLStack224,0x749f709a8);
              }
              else {
                lib::L2CValue::L2CValue(aLStack272,0x12ec951cd8);
                lib::L2CValue::L2CValue(aLStack256,0x1661eb4cd9);
                lib::L2CValue::L2CValue(aLStack240,0x1a95b95d44);
                lib::L2CValue::L2CValue(aLStack224,0x83ec83f4b);
              }
            }
            else {
              lib::L2CValue::L2CValue(aLStack272,0x1272f6e4bf);
              lib::L2CValue::L2CValue(aLStack256,0x16ff88b4be);
              lib::L2CValue::L2CValue(aLStack240,0x1a0bdaa523);
              lib::L2CValue::L2CValue(aLStack224,0x8a0abc72c);
            }
          }
          else {
            lib::L2CValue::L2CValue(aLStack272,0x111e3ca397);
            lib::L2CValue::L2CValue(aLStack256,0x1568615788);
            lib::L2CValue::L2CValue(aLStack240,0x19eec59b9e);
            lib::L2CValue::L2CValue(aLStack224,0x74e9acdb1);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack272,0x111951678e);
          lib::L2CValue::L2CValue(aLStack256,0x156f0c9391);
          lib::L2CValue::L2CValue(aLStack240,0x19e9a85f87);
          lib::L2CValue::L2CValue(aLStack224,0x749f709a8);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack272,0x12ec951cd8);
        lib::L2CValue::L2CValue(aLStack256,0x1661eb4cd9);
        lib::L2CValue::L2CValue(aLStack240,0x1a95b95d44);
        lib::L2CValue::L2CValue(aLStack224,0x83ec83f4b);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack272,0x1272f6e4bf);
      lib::L2CValue::L2CValue(aLStack256,0x16ff88b4be);
      lib::L2CValue::L2CValue(aLStack240,0x1a0bdaa523);
      lib::L2CValue::L2CValue(aLStack224,0x8a0abc72c);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack272,0x111e3ca397);
    lib::L2CValue::L2CValue(aLStack256,0x1568615788);
    lib::L2CValue::L2CValue(aLStack240,0x19eec59b9e);
    lib::L2CValue::L2CValue(aLStack224,0x74e9acdb1);
  }
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::operator_(aLStack160,aLStack272);
  lib::L2CValue::operator_(aLStack176,aLStack256);
  lib::L2CValue::operator_(aLStack192,aLStack240);
  lib::L2CValue::operator_(aLStack208,aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack272,_SITUATION_KIND_GROUND);
  uVar8 = lib::L2CValue::operator__(pLVar7,aLStack272);
  lib::L2CValue::_L2CValue(aLStack272);
  if ((uVar8 & 1) == 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack272,SITUATION_KIND_AIR);
    uVar8 = lib::L2CValue::operator__(pLVar7,aLStack272);
    lib::L2CValue::_L2CValue(aLStack272);
    if ((uVar8 & 1) == 0) goto LAB_7100010b28;
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::L2CValue(aLStack368,1.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar9 = lib::L2CValue::as_hash(aLStack176);
    fVar14 = (float)lib::L2CValue::as_number(aLStack272);
    fVar15 = (float)lib::L2CValue::as_number(aLStack368);
    bVar2 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar9,fVar14,fVar15,(bool)(bVar2 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::L2CValue(aLStack272,_FIGHTER_KINETIC_TYPE_AIR_STOP);
    iVar3 = lib::L2CValue::as_integer(aLStack272);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
  }
  else {
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::L2CValue(aLStack368,1.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar9 = lib::L2CValue::as_hash(aLStack160);
    fVar14 = (float)lib::L2CValue::as_number(aLStack272);
    fVar15 = (float)lib::L2CValue::as_number(aLStack368);
    bVar2 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar9,fVar14,fVar15,(bool)(bVar2 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::L2CValue(aLStack272,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    iVar3 = lib::L2CValue::as_integer(aLStack272);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
  }
  lib::L2CValue::_L2CValue(aLStack272);
LAB_7100010b28:
  lib::L2CValue::L2CValue(aLStack272,0x54f934137);
  lib::L2CValue::L2CValue(aLStack368,true);
  lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_THROW_WORK_INT_TARGET_HIT_GROUP);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_THROW_WORK_INT_TARGET_HIT_NO);
  lib::L2CValue::L2CValue(aLStack288,FIGHTER_STATUS_THROW_WORK_FLOAT_MOTION_RATE);
  HVar9 = lib::L2CValue::as_hash(aLStack272);
  HVar10 = lib::L2CValue::as_hash(aLStack192);
  bVar2 = lib::L2CValue::as_bool(aLStack368);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar4 = lib::L2CValue::as_integer(aLStack144);
  iVar5 = lib::L2CValue::as_integer(aLStack288);
  app::lua_bind::LinkModule__send_event_nodes_throw_impl
            (this->moduleAccessor,HVar9,HVar10,(bool)(bVar2 & 1),iVar3,iVar4,iVar5);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack368,LINK_NO_CAPTURE);
  iVar3 = lib::L2CValue::as_integer(aLStack368);
  uVar6 = app::lua_bind::LinkModule__get_node_object_id_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack272,uVar6);
  lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_THROW_WORK_INT_TARGET_OBJECT);
  iVar3 = lib::L2CValue::as_integer(aLStack272);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::L2CValue(aLStack272,_WEAPON_LINK_NO_CONSTRAINT);
  lib::L2CValue::L2CValue(aLStack368,0x1e452658ea);
  iVar3 = lib::L2CValue::as_integer(aLStack272);
  HVar9 = lib::L2CValue::as_hash(aLStack368);
  app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar3,HVar9,0);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack272,_FIGHTER_SHIZUE_GENERATE_ARTICLE_FISHINGROD);
  iVar3 = lib::L2CValue::as_integer(aLStack272);
  HVar9 = lib::L2CValue::as_hash(aLStack208);
  app::lua_bind::ArticleModule__change_motion_impl(this->moduleAccessor,iVar3,HVar9,false,-1.0);
  lib::L2CValue::_L2CValue(aLStack272);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this[1].moduleAccessor,0x181021879c);
  lib::L2CValue::operator_(pLVar7,aLStack160);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this[1].moduleAccessor,0x15c13eab83);
  lib::L2CValue::operator_(pLVar7,aLStack176);
  lib::L2CValue::L2CValue(aLStack368,LINK_NO_CAPTURE);
  iVar3 = lib::L2CValue::as_integer(aLStack368);
  uVar6 = app::lua_bind::LinkModule__get_node_object_id_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack272,uVar6);
  uVar6 = lib::L2CValue::as_integer(aLStack272);
  pvVar11 = (void *)app::sv_battle_object::module_accessor(uVar6);
  if (pvVar11 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack288,(L2CValue *)&FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
  }
  else {
    lib::L2CValue::L2CValue(aLStack288,pvVar11);
  }
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack368);
  pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack288);
  uVar16 = app::lua_bind::PostureModule__pos_2d_impl(pBVar12);
  lib::L2CValue::L2CValue(aLStack272,(float)uVar16);
  lib::L2CValue::L2CValue(aLStack256,(float)((ulong)uVar16 >> 0x20));
  lib::L2CValue::L2CValue(aLStack368,aLStack272);
  lib::L2CValue::L2CValue(aLStack128,aLStack256);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x90,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack368);
  pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack288);
  uVar16 = app::lua_bind::PostureModule__prev_pos_2d_impl(pBVar12);
  lib::L2CValue::L2CValue(aLStack368,(float)uVar16);
  lib::L2CValue::L2CValue(aLStack352,(float)((ulong)uVar16 >> 0x20));
  lib::L2CValue::L2CValue(aLStack128,aLStack368);
  lib::L2CValue::L2CValue(aLStack144,aLStack352);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x80,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::operator_(aLStack320,aLStack336);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack336,aLStack304);
  lua2cpp::L2CFighterBase::Vector2__length(this,(L2CValue)0xb0);
  lib::L2CValue::L2CValue(aLStack400,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack416,0x1a1f31668b);
  uVar8 = lib::L2CValue::as_integer(aLStack400);
  uVar13 = lib::L2CValue::as_integer(aLStack416);
  fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar8,uVar13)
  ;
  lib::L2CValue::L2CValue(aLStack384,fVar14);
  lib::L2CValue::operator_(aLStack320,aLStack384);
  lib::L2CValue::L2CValue(aLStack448,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack464,0x1432491be2);
  uVar8 = lib::L2CValue::as_integer(aLStack448);
  pLVar7 = (L2CValue *)lib::L2CValue::as_integer(aLStack464);
  fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (this->moduleAccessor,uVar8,(ulong)pLVar7);
  lib::L2CValue::L2CValue(aLStack432,fVar14);
  lib::L2CAgent::math_min((L2CAgent *)aLStack144,aLStack432,pLVar7);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack336);
  fVar14 = (float)lib::L2CValue::as_number(aLStack128);
  app::lua_bind::AttackModule__set_power_add_status_impl(this->moduleAccessor,fVar14);
  lib::L2CValue::L2CValue(aLStack144,SpecialSThrow_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

